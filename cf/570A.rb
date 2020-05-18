n, m = gets.split.map{|x| x.to_i}
c = [0]*n
m.times do
    a = gets.split.map{|x| x.to_i}
    c[a.find_index(a.max)] += 1
end
puts(c.find_index(c.max) + 1)
