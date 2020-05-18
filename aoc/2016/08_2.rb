screen = []
6.times{screen << [false]*50}
STDIN.read.split(/\n/).each do |line|
  op = line.split
  case op[0]
  when 'rect'
    a, b = op[1].split('x').map(&:to_i)
    (0...b).each{|i| (0...a).each{|j| screen[i][j] = true}}
  when 'rotate'
    case op[1]
    when 'row'
      screen[op[2][-1].to_i].rotate!(-op[-1].to_i)
    when 'column'
      x = op[2][2..-1].to_i
      col = screen.map{|row| row[x]}
      col.rotate!(-op[-1].to_i)
      6.times{|i| screen[i][x] = col[i]}
    end
  end
end
(0..5).each{|i| (0..49).each{|j| print(screen[i][j] ? '#' : '.')}; puts}
