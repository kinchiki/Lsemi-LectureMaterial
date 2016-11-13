zun_counter = 0
loop do
  if Random.rand >= 0.5
    zun_counter += 1
    print "ズン、"

  else
    puts "ドコ"
    if zun_counter == 4
      break
    end
    zun_counter = 0
  end
end
puts "キ・ヨ・シ！"
