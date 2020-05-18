s = 0
STDIN.read.split(/\n/).each do |line|
  row = line.split.map(&:to_i)
  (0...row.size).each do |i|
    (0...row.size).each do |j|
      s += row[i]/row[j] if i != j && row[i]%row[j] == 0
    end
  end
end
p s
