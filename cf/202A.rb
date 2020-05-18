s = gets.strip
msp = ""
(0..s.size-1).each do |i|
    (i..s.size - 1).each do |j|
        sp = s[i..j]
        msp = sp if sp == sp.reverse && sp > msp
    end
end
puts msp
