prg, subprg = [], []
STDIN.read.split(/\n/).each do |line|
  s = line.split
  prg << s[0]
  (3...s.size).each do |i|
    s[i] = s[i][0..-2] if s[i][-1] == ','
    subprg << s[i]
  end
end
puts (prg - subprg)[0]
