n, k, l, c, d, p, nl, np = gets.split.map{|x| x.to_i}
puts([k*l/(nl*n), c*d/n, p/(np*n)].min)
