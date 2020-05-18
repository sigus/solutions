n = gets.to_i
a = gets.split.map(&:to_i)
npoints, i = [0, 0], 0
while a.size > 0
  if a[0] > a[-1]
    npoints[i%2] += a[0]
    a = a[1..-1]
  else
    npoints[i%2] += a[-1]
    a = a[0..-2]
  end
  i += 1
end
puts npoints.join(' ')