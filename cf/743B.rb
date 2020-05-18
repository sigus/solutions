n, k = gets.split.map{|x| x.to_i}
u = 1
loop {
    if (k - 2**(u - 1))%(2*u) == 0
        puts u
        exit 0
    end
    u += 1
}
