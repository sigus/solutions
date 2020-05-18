f = []
f << gets
f << gets
f << gets
f.map! {|x| x.split('')}
nx, nz, n = 0, 0, 0
xw, zw = false, false
f.each do |x|
    xw ||= x[0] == 'X' && x[1] == 'X' && x[2] == 'X'
    zw ||= x[0] == '0' && x[1] == '0' && x[2] == '0'
    x.each do |y|
        nx += 1 if y == 'X'
        nz += 1 if y == '0'
        n += 1 if y == 'X' or y == '0'
    end
end
f.transpose.each do |x|
    xw ||= x[0] == 'X' && x[1] == 'X' && x[2] == 'X'
    zw ||= x[0] == '0' && x[1] == '0' && x[2] == '0'
end
xw ||= f[0][0] == 'X' && f[1][1] == 'X' && f[2][2] == 'X' 
xw ||= f[2][0] == 'X' && f[1][1] == 'X' && f[0][2] == 'X'
zw ||= f[0][0] == '0' && f[1][1] == '0' && f[2][2] == '0' 
zw ||= f[2][0] == '0' && f[1][1] == '0' && f[0][2] == '0'
if nz > nx || nx - nz > 1 || xw && zw || xw && nx == nz || zw && nx != nz
    puts "illegal"
elsif xw
    puts "the first player won"
elsif zw
    puts "the second player won"
elsif n == 9
    puts "draw"
elsif nx - nz == 1
    puts "second"
elsif
    puts "first"
end

