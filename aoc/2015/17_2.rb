a = STDIN.read.split.map(&:to_i)
b = (0...2**a.size).map{|i|
  c = i.digits(2).select{|x| x == 1}.size
  (0...a.size).inject(0){|t, j| 1<<j&i > 0 ? t+a[j] : t} == 150 ? c : nil
}
b.select!{|x| x}
p b.count(b.min)
