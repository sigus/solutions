v, t, r = [], [], []
STDIN.read.split(/\n/).each do |line|
  s = line.split
  v << s[3].to_i
  t << s[6].to_i
  r << s[-2].to_i
end
ct, cr = t.dup, []
npoints, pos, flying = [0]*v.size, [0]*v.size, [true]*v.size
(1..2503).each do
  (0...v.size).each do |i|
    if flying[i]
      pos[i] += v[i]
      ct[i] -= 1
      if ct[i] == 0
        flying[i] = false
        cr[i] = r[i]
      end
    else
      cr[i] -= 1
      if cr[i] == 0
        flying[i] = true
        ct[i] = t[i]
      end
    end
  end
  (0...v.size).each do |i|
    npoints[i] += pos[i] == pos.max ? 1 : 0
  end
end
p npoints.max
