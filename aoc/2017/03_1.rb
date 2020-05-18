x, y, r, i, dx, dy = 0, 0, STDIN.read.to_i - 1, 2, 1, 0
while r > 0
  s = [i/2, r].min
  x += s*dx
  y += s*dy
  dx, dy = -dy, dx
  i += 1
  r -= s
end
p x.abs + y.abs
