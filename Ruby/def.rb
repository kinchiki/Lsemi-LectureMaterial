def sample(val = "hoge")
  if val == "SUKI" # then 省略可
    "好き"
  elsif val+"kamo" == "Sukikamo" #else if じゃない
    "脈あり"
  elsif val == "hoge"
      p "ほげえええええええええ！！！"
  else
    "無関心"
  end
end

p sample("s") #sample "s"  sample"s"
p sample "suki".upcase
p sample"Suki"
sample; sample(); sample 'hoge'


def connect(a, n=0, m=1)
  #(n...m).each { |i| a[i] = "!" }
  # for i in n..m do a[i] = "!" end
  #a.fill("!", n...m)
  p a
  c_string = ""
  a.reverse.each { |char| c_string += char }
  c_string
  # a.reverse.join ↑3行無しでこれだけでいけちゃう
end

x = ('J'..'R').to_a
p x

p connect(x, 2, 6)
p ('J'..'R').to_a.fill("!",2...6).reverse.join # で終了
#p ('a'..'z').to_a.join
