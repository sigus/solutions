n, d = gets.split.map{|x| x.to_i}
t = gets.split.map{|x| x.to_i}
s = t.inject(0){|s, x| s + x}
if s + 10*(n - 1) > d
    puts(-1)
else
    puts((d - s)/5)
end
