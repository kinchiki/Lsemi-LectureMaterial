ary = (0..10).to_a
p ary

ary[1..4] = 100
p ary

ary[1, 0] = [50,-3]
p ary

ary[5, 5] = []
p ary

p ary.max
p ary.min

ary.push(-1000, -11)
p ary

ary << 69 << 19
p ary

p ary.sort
p ary.sort.reverse

ary[12] = "last"
p ary
p ary.length


puts


alphabet = ('a'..'z').to_a
p alphabet

random = alphabet[0..-20]
p random
random.shuffle
p random
random.shuffle!
p random



#s = ["a", "b", "c"]
# ()じゃなくても可 {a b c} とか !a b c!とか %w$a b c$
s = %w(a b c)
p s
p "c" if s[-1] == "c"

t = %W~#{s[0]} i shi te ru~
p t
p "嫌いじゃない"unless t == "Kirai"

puts
