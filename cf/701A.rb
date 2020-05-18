n = gets.to_i
a = gets.split.each_with_index.map{|x, i| [x.to_i, i + 1]}.sort
(0...a.size/2).each{|i| puts a[i][1].to_s + ' ' + a[-1 - i][1].to_s}