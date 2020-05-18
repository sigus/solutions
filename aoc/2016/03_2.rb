ans = 0
s = STDIN.read.split(/\n/).map(&:split).transpose.flatten.map(&:to_i)
(0...s.size-2).step(3) do |i|
  a, b, c = s[i], s[i + 1], s[i + 2]
  ans += 1 if a+b>c && a+c>b && b+c>a
end
p ans
