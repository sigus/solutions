a = [nil] + gets.split.map{|x| x.to_i}
puts(gets.strip.split('').map{|x| x.to_i}.inject(0){|s, x| s += a[x]})
