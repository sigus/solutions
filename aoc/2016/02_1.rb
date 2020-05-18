keypad = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]
x, y, code = 1, 1, ''
STDIN.read.split(/\n/).each do |line|
  line.split('').each do |ch|
    case ch
    when 'U'
      y -= 1 if y > 0
    when 'D'
      y += 1 if y < 2
    when 'L'
      x -= 1 if x > 0
    when 'R'
      x += 1 if x < 2
    end
  end
  code += keypad[y][x].to_s
end
puts code
