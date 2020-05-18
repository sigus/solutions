b = 0
gets
s = gets.strip.split('')
i = 1
while i < s.size
    b += (s[i] == 'F' ? 1 : -1)if s[i] != s[i - 1]
    i += 1
end
puts (b > 0 ? 'YES': 'NO')

