n, a, b = gets.split.map{|x| x.to_i}
s = gets.strip.split('')
puts(s[a - 1] == s[b - 1] ? 0 : 1)
