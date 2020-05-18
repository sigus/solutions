ans = 0
STDIN.read.split(/\n/).each do |line|
  ans += line.dump.size - line.size
end
p ans
