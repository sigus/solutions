x = gets.strip.split('').map{|x| x.to_i}
x[0] = 9 - x[0] if x[0] > 4 && x[0] != 9
(1..x.size - 1).each{|i| x[i] = 9 - x[i] if x[i] > 4}
puts(x.join)
