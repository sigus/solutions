gets
t = []
t << gets.split.map{|x| x.to_i}.inject(0) do |s, x|
    t << s if x == 1 && s > 0
    x
end
puts(t.size, t.join(' '))

