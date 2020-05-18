n, c = gets.split.map{|x| x.to_i}
puts(gets.split.map{|x| x.to_i}.inject([0, 0]){|s, x| [x - s[1] <= c ? s[0] + 1 : 1, x]}[0])
