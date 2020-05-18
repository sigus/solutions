ans = 0
STDIN.read.split(/\n/).each do |line|
  s = line.split.map(&:to_i)
  ans += 1 if s[0]+s[1]>s[2] && s[0]+s[2]>s[1] && s[1]+s[2]>s[0]
end
p ans
