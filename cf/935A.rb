n = gets.to_i
s = 0
(1..n-1).each do |x|
    s += 1 if (n - x)%x == 0
end
puts s

