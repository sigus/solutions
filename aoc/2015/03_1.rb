x, y = 0, 0
h = {[0, 0] => true}
STDIN.read.split('').each do |d|
  case d
  when '<'
    x -= 1
  when '>'
    x += 1
  when 'v'
    y -= 1
  when '^'
    y += 1
  end
  h[[x, y]] = true
end
p h.size
