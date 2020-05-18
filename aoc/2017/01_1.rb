d = STDIN.read.strip.split('').map(&:to_i)
s = 0
(0...d.size).each{|i| s += d[i] if d[i] == d[(i + 1)%d.size]}
p s
