n, m = gets.split.map{|x| x.to_i}
segs = []
n.times{segs << gets.split.map{|x| x.to_i}}
points = []
(1..m).each do |x|
    points << x if segs.inject(true) do |s, y|
        s &&= !x.between?(y[0], y[1])
    end
end
puts(points.size, points.join(' '))
