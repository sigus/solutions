n, k = gets.split.map &:to_i
a = gets.split.map &:to_i
p a.inject(k){|s, x| [s, k%x == 0 ? k/x : k].min}