h, d = 0, 0
v = "AEIOUY".split('')
s = gets.strip.split('')
(0..s.size-1).each do |i|
    d += 1
    h = [h, d].max
    d = 0 if v.include?(s[i])
end
h = [h, d + 1].max
puts h
