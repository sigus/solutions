l, r, a = gets.split.map &:to_i
p 2*([l, r].min + [a, (l - r).abs].min) + (a - [a, (l - r).abs].min)/2*2