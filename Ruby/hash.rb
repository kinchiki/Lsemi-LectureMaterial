member = { kawa: "リア充", :shima => "いずれできるさ", "kuri" => "ライバーかな？" } # 3種類の定義方法
p member[:kawa] # :から始まるのはシンボル
p member.size
p member.values
p member.keys

p "sawaはいません" unless member.has_key?(:sawa) #後続unless if !=
member[:sawa] = "もっと気軽に喋ってくれてええんやで" # 追加
p "sawaはいます" if member.has_key?(:sawa) #後続if

p "2年生にコミュ障は多分いません（3年生には...）" unless member.has_value?("コミュ障")
member[:shima] = "公務員"  # 代入

member.each do |key, value|  # 2つ指定
  puts "#{key}は#{value}"
end

member = member.to_a  # 配列に変換
p member[0]
p member = member.to_h  # ハッシュに変換
p member[:kawa]
puts

def pass_make
  ('a'..'z').to_a.shuffle[0..3].join
end

#shu = {
#  ('a'..'z').to_a.shuffle[0..3].join => "a"
#}
