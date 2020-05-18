c = 'a'.ord
m = 'z'.ord - 'a'.ord + 1
puts(gets.strip.split('').map{|x| x.ord}.inject(0){|s, x| t = s + [[x, c].max - [x, c].min, ([x, c].min - [x, c].max)%m].min; c = x; t})
