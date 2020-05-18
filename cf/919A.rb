n, m = gets.split.map{|x| x.to_i}
t, f = 0.0, 101.0
n.times do
    a, b = gets.split.map{|x| x.to_i + 0.0}
    f = [f, a/b].min
    t = f*m
end
puts t
