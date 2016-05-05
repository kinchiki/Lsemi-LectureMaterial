ha = { kawa: "リア充", :shima => "いずれできるさ", "kuri" => "ライバーかな？" } # 3種類の定義方法
p ha[:kawa] # :から始まるのはシンボル
p ha.size
p ha.values
p ha.keys

p "sawaはいません" unless ha.has_key?(:sawa) #後続unless if !=
ha[:sawa] = "もっと気軽に喋ってくれてええんやで" # 追加
p "sawaはいます" if ha.has_key?(:sawa) #後続if

p "2年生にコミュ障は多分いません（3年生には...）" unless ha.has_value?("コミュ障")
ha[:shima] = "公務員"  # 代入

ha.each do |key, value|  # 2つ指定
  puts "#{key}は#{value}"
end

ha = ha.to_a  # 配列に変換
p ha[0]
p ha = ha.to_h  # ハッシュに変換
p ha[:kawa]
puts

def alrand
  ('a'..'z').to_a.shuffle[0..3].join
end

#shu = {
#  ('a'..'z').to_a.shuffle[0..3].join => "a"
#}
