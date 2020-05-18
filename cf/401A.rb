n, x = gets.split.map &:to_i
a = gets.split.map &:to_i
s = a.inject(0){|s, x| s + x}
p (s.abs + x - 1)/x