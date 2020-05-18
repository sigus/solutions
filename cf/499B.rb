n, m = gets.split.map{|x| x.to_i}
h = {}
m.times{h.merge!(Hash[*gets.split])}
puts(gets.split.map{|x| x.size <= h[x].size ? x : h[x]}.join(' '))
