n = gets.to_i
c = {}
n.times do
    h, m = gets.split.map{|x| x.to_i}
    c[[h, m]] = 0 unless c[[h, m]]
    c[[h, m]] += 1
end
puts c.max{|a, b| a[1] <=> b[1]}[1]
