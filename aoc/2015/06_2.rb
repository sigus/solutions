grid = []
1000.times{grid << [0]*1000}
STDIN.read.split(/\n/).each do |line|
  instr = line.split
  x1, y1 = instr[-3].split(',').map{|s| s.to_i}
  x2, y2 = instr[-1].split(',').map{|s| s.to_i}
  x1.upto(x2) do |x|
    y1.upto(y2) do |y|
      if instr[0] == 'turn' && instr[1] == 'on'
        grid[x][y] += 1
      elsif instr[0] == 'turn' && instr[1] == 'off'
        grid[x][y] -= 1 if grid[x][y] > 0
      else
        grid[x][y] += 2
      end
    end
  end
end
cnt = 0
grid.each do |x|
  x.each do |y|
    cnt += y
  end
end
p cnt
