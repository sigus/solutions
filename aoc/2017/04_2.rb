ans = 0
STDIN.read.split(/\n/).each do |line|
  strs = line.split.map{|x| x.split('').sort.join}.sort
  ans += 1 unless (1...strs.size).any?{|i| strs[i - 1] == strs[i]}
end
p ans
