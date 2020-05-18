n, x = gets.split.map(&:to_i)
nsad = 0
n.times do
  s, d = gets.split
  d = d.to_i
  if s == '+'
    x += d
  elsif d <= x
    x -= d
  else
    nsad += 1
  end
end
print x, ' ', nsad