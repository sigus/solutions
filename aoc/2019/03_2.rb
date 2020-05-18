lines = STDIN.read.split
dx = {'R' => 1, 'L' => -1, 'U' => 0, 'D' => 0 }
dy = {'R' => 0, 'L' => 0,  'U' => 1, 'D' => -1}
x, y, n = 0, 0, 0
vis = {}
lines[0].split(',').each do |move|
  dir, len = move[0], move[1..-1].to_i
  len.times do
    x += dx[dir]
    y += dy[dir]
    n += 1
    vis[[x, y]] ||= n
  end
end
x, y, n = 0, 0, 0
mindist = nil
lines[1].split(',').each do |move|
  dir, len = move[0], move[1..-1].to_i
  len.times do
    x += dx[dir]
    y += dy[dir]
    n += 1
    if vis[[x, y]]
      mindist ||= n + vis[[x, y]]
      mindist = [mindist, n + vis[[x, y]]].min
    end
  end
end
p mindist
