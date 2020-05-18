gets
puts(gets.split.map{|x| x.to_i}.map{|x| x%2 == 0 ? x - 1 : x}.join(' '))
