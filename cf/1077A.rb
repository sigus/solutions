t = gets.to_i
t.times do
  a, b, k = gets.split.map(&:to_i)
  p(a*((k + 1)/2) - b*(k/2))
end
