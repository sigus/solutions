mem = STDIN.read.split.map(&:to_i)
h = {mem => 0}
ncycles = 0
loop do
  i = mem.find_index(mem.max)
  r, mem[i] = mem[i], 0
  while r > 0
    i += 1
    i %= mem.size
    mem[i] += 1
    r -= 1
  end
  ncycles += 1
  if h[mem]
    p(ncycles - h[mem])
    exit
  end
  h[mem] = ncycles
end
