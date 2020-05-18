n = gets.to_i
a, b, m = [], [], [0]*(n + 1)
n.times do |i|
    a[i], b[i] = gets.split.map{|x| x.to_i}
    m[b[i]] = a[i]
end
(1..n).each{|i| m[i] = [m[i - 1], m[i]].max}
n.times do |i|
    if a[i] < m[b[i]]
        puts "Happy Alex"
        exit
    end
end
puts "Poor Alex"
