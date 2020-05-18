v = [100, 20, 10, 5, 1]
n = gets.to_i
c = 0
v.each do |x|
    c += n/x
    n %= x
end
puts c
