k_2, k_3, k_5, k_6 = gets.split.map{|x| x.to_i}
a = [k_2, k_5, k_6].min
b = [k_2 - a, k_3].min
puts(a*256 + b*32)
