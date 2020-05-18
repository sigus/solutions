mem = STDIN.read.split.map(&:to_i)
h = {mem => true}
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
  break if h[mem]
  h[mem] = true
end
p ncycles
