lines = STDIN.read.split
dx = {'R' => 1, 'L' => -1, 'U' => 0, 'D' => 0 }
dy = {'R' => 0, 'L' => 0,  'U' => 1, 'D' => -1}
x, y = 0, 0
vis = {}
lines[0].split(',').each do |move|
  dir, len = move[0], move[1..-1].to_i
  len.times do
    x += dx[dir]
    y += dy[dir]
    vis[[x, y]] = true
  end
end
x, y = 0, 0
mindist = nil
lines[1].split(',').each do |move|
  dir, len = move[0], move[1..-1].to_i
  len.times do
    x += dx[dir]
    y += dy[dir]
    if vis[[x, y]]
      mindist ||= x.abs + y.abs
      mindist = [mindist, x.abs + y.abs].min
    end
  end
end
p mindist
