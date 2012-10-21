sum = 0
(2**1000).to_s.each_char {|c| sum += c.to_i }
puts sum

