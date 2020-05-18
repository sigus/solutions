n, m = STDIN.read.split.map &:to_i
p m.to_s(2).size < n ? m : m%2**n