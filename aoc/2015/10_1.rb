s = STDIN.read.strip.split('')
40.times{s = s.chunk{|x| x}.inject(''){|t, x| t + x[1].size.to_s + x[0]}.split('')}
p s.size
