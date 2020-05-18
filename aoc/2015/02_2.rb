s = 0
STDIN.read.split.each do |x|
  dim = x.split('x').map{|y| y.to_i}.sort
  s += 2*(dim[0] + dim[1]) + dim[0]*dim[1]*dim[2]
end
p s
