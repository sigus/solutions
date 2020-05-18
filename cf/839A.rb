n, k = gets.split.map{|x| x.to_i}
a, b, i = 0, 0, 0
gets.split.map{|x| x.to_i}.each do |x|
    i += 1
    a += x
    b += [a, 8].min
    if b >= k
        puts i
        exit 0
    end
    a -= [a, 8].min
end
puts -1
