s = 0
STDIN.read.split.each do |x|
  dim = x.split('x').map{|y| y.to_i}
  area = [dim[0]*dim[1], dim[0]*dim[2], dim[1]*dim[2]]
  s += 2*area.sum + area.min
end
p s
