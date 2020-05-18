lines = STDIN.read.split(/\n/)
a = []
lines[0].size.times{a << []}
lines.each do |line|
  s = line.split('')
  (0...s.size).each{|i| a[i] << s[i]}
end
puts a.map{|x| x[x.map{|y| x.count(y)}.each_with_index.max[1]]}.join
