n = gets.to_i
d = gets.split.map &:to_i
a, b = gets.split.map &:to_i
p d[a-1...b-1].inject(0){|s, x| s + x}