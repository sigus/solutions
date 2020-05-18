ans = 0
STDIN.read.split(/\n/).each do |line|
  ans += 1 if line.split.size == line.split.uniq.size
end
p ans
