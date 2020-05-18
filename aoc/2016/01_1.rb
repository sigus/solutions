x, y = 0, 0
dx, dy = 0, 1
STDIN.read.split.each do |instr|
  if instr[0] == 'L'
    dx, dy = -dy, dx
  else
    dx, dy = dy, -dx
  end
  nblocks = instr[1..-1].to_i
  x += nblocks*dx
  y += nblocks*dy
end
p(x.abs + y.abs)
