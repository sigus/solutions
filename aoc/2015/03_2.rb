x, y = [0, 0], [0, 0]
h = {[0, 0] => true}
i = 0
STDIN.read.split('').each do |d|
  case d
  when '<'
    x[i%2] -= 1
  when '>'
    x[i%2] += 1
  when 'v'
    y[i%2] -= 1
  when '^'
    y[i%2] += 1
  end
  h[[x[0], y[0]]] = true
  h[[x[1], y[1]]] = true
  i += 1
end
p h.size
