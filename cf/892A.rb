n = gets.to_i
a = gets.split.map &:to_i
b = gets.split.map &:to_i
puts a.inject(0){|s, x| s + x} <= b.sort[-2] +  b.sort[-1] ? 'YES' : 'NO'