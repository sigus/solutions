gets
x = gets.split.map{|x| x.to_i}
puts([x[1] - x[0], x[-1] - x[0]].join(' '))
(1..x.size-2).each do |i|
    puts([[x[i] - x[i - 1], x[i + 1] - x[i]].min,
         [x[i] - x[0], x[-1] - x[i]].max].join(' '))
end
puts ([x[-1] - x[-2], x[-1] - x[0]].join(' '))
