ans = 0
STDIN.read.split(/\n/).each do |line|
  s = line.split('-')
  id, chksum = s[-1].to_i, s[-1].tr('[]0123456789', '')
  f = []
  26.times{|i| f << [i, 0]}
  s[0..-2].join.split('').each{|x| f[x.ord - 'a'.ord][1] += 1}
  f.sort! do |x, y| 
    cmp = y[1] <=> x[1]
    if cmp == 0
      x[0] <=> y[0]
    else
      cmp
    end
  end
  ans += id if f.map{|x| (x[0] + 'a'.ord).chr}[0..4].join == chksum
end
p ans
