n = gets.to_i
a = []
n.times{a << gets.split.map{|x| x.to_i}.inject(0){|s, x| s + x}}
s = a[0]
puts(a.sort.reverse.index(s) + 1)

