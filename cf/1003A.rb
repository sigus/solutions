gets
a = gets.split.map{|x| x.to_i}
puts(a.map{|x| a.count(x)}.max)
