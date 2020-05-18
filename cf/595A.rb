n, m = gets.split.map(&:to_i)
ans = 0
n.times do
  a = gets.split.map(&:to_i)
  (0..m-1).each{|i| ans += 1 if a[2*i] == 1 || a[2*i + 1] == 1}
end
p ans
