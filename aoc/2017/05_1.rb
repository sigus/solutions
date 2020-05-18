a = STDIN.read.split.map(&:to_i)
i, nsteps = 0, 0
while (0...a.size) === i
  pr = i
  i += a[i]
  a[pr] += 1
  nsteps += 1
end
p nsteps
