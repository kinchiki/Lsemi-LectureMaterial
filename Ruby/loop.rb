(1..9).each { |i|
  (1..9).each { |j| print "%3d" % [i*j] } # = sprintf("3%d", i*j)
  puts
}

1.upto(9) { |n| puts "%3d"*9 % [*n.step(n*9,n)] }
ar = (1..9).map { |a|(1..9).map {|b|a*b} }

p ar

a = (1..10).to_a
sum = 0
for i in (0...a.size) do
  sum += a[i] # iのスコープはブロック外にまであるため注意
end
p sum

j = 0
sum = 0
while j < a.size do
  sum += a[j]
  j += 1
end
p sum

sum = 0
a.size.times { |k| sum += a[k] }
p sum

sum = 0
a.each { |n| sum += n }
p sum

sum = 0
p a.map { |n| sum += n }
p sum

a = (1..10).to_a
p a.inject(:+) #すごない？
p a.inject(1000, :+)
p a.inject(:-)

puts


sum = 0
(1..10).each do |m|
  if i == 5
    next
  end
  sum += m
end
p sum

sum = 0
for w in 0..10 do
  sum += w
end
p sum
p w

j = 0
sum = 0
while j <= 10 do
  sum += j
  j += 1
end
p sum

sum = 0
11.times do |k|
  sum += k
end
p sum

puts
