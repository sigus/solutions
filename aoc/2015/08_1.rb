ans = 0
STDIN.read.split(/\n/).each do |line|
  ans += line.size - eval(line).size
end
p ans
