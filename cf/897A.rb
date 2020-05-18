n, m = gets.split.map(&:to_i)
s = gets.strip
m.times do
  line = gets.split
  l, r = line[0..1].map(&:to_i)
  c = line[2..3]
  s[l-1..r-1] = s[l-1..r-1].tr(c[0], c[1])
end
puts s
