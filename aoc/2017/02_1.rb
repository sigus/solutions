s = 0
STDIN.read.split(/\n/).each do |line|
  row = line.split.map(&:to_i)
  s += row.max - row.min
end
p s
