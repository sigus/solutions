n, m = gets.split.map &:to_i
ans, a, b = 0, 0, 0
loop do
  break if a*a + b > n || a + b*b > m
  loop do
    break if a*a + b > n || a + b*b > m
    ans += 1 if a*a + b == n && a + b*b == m
    b += 1
  end
  b = 0
  a += 1
end
p ans