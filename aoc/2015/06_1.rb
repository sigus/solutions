grid = []
1000.times{grid << [false]*1000}
cnt = 0
STDIN.read.split(/\n/).each do |line|
  instr = line.split
  x1, y1 = instr[-3].split(',').map{|s| s.to_i}
  x2, y2 = instr[-1].split(',').map{|s| s.to_i}
  x1.upto(x2) do |x|
    y1.upto(y2) do |y|
      if instr[0] == 'turn' && instr[1] == 'on'
        cnt += 1 unless grid[x][y]
        grid[x][y] = true
      elsif instr[0] == 'turn' && instr[1] == 'off'
        cnt -= 1 if grid[x][y]
        grid[x][y] = false
      else
        cnt += grid[x][y] ? -1 : 1
        grid[x][y] = !grid[x][y]
      end
    end
  end
end
p cnt
