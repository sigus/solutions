a = STDIN.read.split.map(&:to_i)
p((0...2**a.size).inject(0){|s, i|
  s + ((0...a.size).inject(0){|t, j| 1<<j&i > 0 ? t+a[j] : t} == 150 ? 1 : 0)
})
