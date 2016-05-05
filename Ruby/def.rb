def div(enjm = "hoge")
  if enjm == "SUKI" # then 省略可
    "好き"
  elsif enjm+"kamo" == "Sukikamo" #else if じゃない
    "脈あり"
  elsif enjm == "hoge"
      p "ほげえええええええええ！！！"
  else
    "無関心"
  end
end

p div("s") #div "s"  div"s"
p div "suki".upcase
p div"Suki"
div; div(); div 'hoge'


def cat(a, n=0, m=1)
  #(n...m).each { |i| a[i] = "ほ" }
  # for i in n..m do a[i] = "ほ" end
  #a.fill("ほ", n...m)
  p a
  ren = ""
  a.reverse.each { |char| ren += char }
  return ren
  # a.reverse.join ↑3行無しでこれだけでいけちゃう
end

x = ('J'..'R').to_a
p x

p cat(x, 2, 6)
p ('J'..'R').to_a.fill("ほ",2...6).reverse.join # で終了
#p ('a'..'z').to_a.join
