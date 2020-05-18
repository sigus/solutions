s = []
STDIN.read.split(/\n/).each do |line|
  sp = line.split
  v, t, r = sp[3].to_i, sp[6].to_i, sp[-2].to_i
  sc, rem_time, flying = 0, 2503, true
  while rem_time > 0
    if flying
      d = [rem_time, t].min
      sc += d*v
      rem_time -= d
      flying = false
    else
      d = [rem_time, r].min
      rem_time -= d
      flying = true
    end
  end
  s << sc
end
p s.max
