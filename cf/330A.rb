r, c = gets.split.map{|x| x.to_i}
a = []
r.times{a << gets.strip.split('')}
h, v = {}, {}
a.each_index{|i| a[i].each_index{|j| h[i] = v[j] = true if a[i][j] == 'S'}}
t = 0
a.each_index{|i| a[i].each_index{|j| t += 1 if !h[i] || !v[j]}}
puts t
