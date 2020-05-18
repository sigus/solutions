n, k = gets.split.map{|x| x.to_i}
h = gets.split.map{|x| x.to_i}
a = [h[0..k-1].inject(0){|s, x| s + x}]
(k..n-1).each{|i| a << a.last + h[i] - h[i - k]}
puts(a.index(a.min) + 1)
