h = {}
STDIN.read.split(/\n/).each do |line|
  a = line.split
  h[a[0]] = {} unless h[a[0]]
  h[a[2]] = {} unless h[a[2]]
  h[a[0]][a[2]] = h[a[2]][a[0]] = a[4].to_i
end
p h.keys.permutation.map{|x|
  s = 0
  (1...x.size).each{|i| s += h[x[i - 1]][x[i]]}
  s
}.min
