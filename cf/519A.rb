f = []
8.times{f << gets.strip.split('')}
w, b = 0, 0
h = {'Q'=>9, 'R'=>5, 'B'=>3, 'N'=>3, 'P'=>1, 'K'=>0, '.'=>0}
(0..7).each do |i|
    (0..7).each do |j|
        if /[A-Z]/ =~ f[i][j]
            w += h[f[i][j]]
        else
            b += h[f[i][j].upcase]
        end
    end
end
puts({-1 => "Black", 0 => "Draw", 1 => "White"}[w <=> b])
