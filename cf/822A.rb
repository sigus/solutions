puts((1..gets.split.map{|x| x.to_i}.min).inject(1){|s, x| s*x})
