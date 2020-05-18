a = STDIN.read.split.map(&:to_i)
i, nsteps = 0, 0
while (0...a.size) === i
  pr = i
  i += a[i]
  if a[pr] >= 3
    a[pr] -= 1
  else
    a[pr] += 1
  end
  nsteps += 1
end
p nsteps
