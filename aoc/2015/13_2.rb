h, names = {}, {}

STDIN.read.split(/\n/).each do |line|
  s = line.split
  name1, name2 = s[0], s[10][0..-2]
  names[name1] = true
  v = s[2] == 'gain' ? s[3].to_i : -s[3].to_i
  h[name1] ||= {}
  h[name1][name2] = v
end

h["me"] = {}
names.keys.each{|x| h[x]["me"] = h["me"][x] = 0}
names["me"] = true

p names.keys.permutation.map{|x|
  (0...x.size).inject(0){|s, i|
    s + h[x[i]][x[i - 1]] + h[x[i]][x[(i + 1)%x.size]]
  }
}.max
