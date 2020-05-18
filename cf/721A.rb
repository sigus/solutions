gets
a = []
c = 0
gets.strip.split('').each do |x|
    if x == 'B'
        c += 1
    else
        a << c if c > 0
        c = 0
    end
end
a << c if c > 0
puts(a.size, a.join(' '))
