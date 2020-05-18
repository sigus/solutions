p STDIN.read.split.map(&:to_i).inject(0) { |s, x|
  t = x/3 - 2
  while t > 0
    s += t
    t = t/3 - 2
  end
  s
}
