gets
a = gets.split.map{|x| x.to_i}
odds = a.select{|x| x%2 == 1}
puts(a.inject(0){|s, x| s + x} - (odds.size%2 != 0 ? odds.min : 0))
