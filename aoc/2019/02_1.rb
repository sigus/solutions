m = STDIN.read.split(',').map(&:to_i)
m[1..2] = [12, 2]
pos = 0
while m[pos] != 99
  case m[pos]
  when 1
    m[m[pos + 3]] = m[m[pos + 1]] + m[m[pos + 2]]
  when 2
    m[m[pos + 3]] = m[m[pos + 1]] * m[m[pos + 2]]  
  end
  pos += 4
end
p m[0]
