x, y = 0, 0
dx, dy = 0, 1
h = {[0, 0] => true}
STDIN.read.split.each do |instr|
  if instr[0] == 'L'
    dx, dy = -dy, dx
  else
    dx, dy = dy, -dx
  end
  instr[1..-1].to_i.times do
    x += dx
    y += dy
    if h[[x, y]]
      p(x.abs + y.abs)
      exit
    end
    h[[x, y]] = true
  end
end
