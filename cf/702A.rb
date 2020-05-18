gets
a = gets.split.map{|x| x.to_i}
t, l = 1, 1
(1..a.size-1).each do |i|
    l = 0 if a[i] <= a[i - 1]
    l += 1
    t = [t, l].max
end
puts t
