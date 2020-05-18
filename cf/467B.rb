def nbits(n)
    nb = 0
    while n > 0
        nb += n%2
        n /= 2
    end
    nb
end

n, m, k = gets.split.map{|x| x.to_i}
x = []
(m + 1).times{x << gets.to_i}
f = 0
(0..m-1).each{|i| f += 1 if nbits(x[i]^x[m]) <= k}
puts f
