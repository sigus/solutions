keypad = [
  ['', '',  '',  '',  '',  '',  ''],
  ['', '',  '',  '1', '',  '',  ''],
  ['', '',  '2', '3', '4', '',  ''],
  ['', '5', '6', '7', '8', '9', ''],
  ['', '',  'A', 'B', 'C', '',  ''],
  ['', '',  '',  'D', '',  '',  ''],
  ['', '',  '',  '',  '',  '',  '']
]
x, y, code = 1, 3, ''
STDIN.read.split(/\n/).each do |line|
  line.split('').each do |ch|
    case ch
    when 'U'
      y -= 1 if keypad[y - 1][x].size > 0
    when 'D'
      y += 1 if keypad[y + 1][x].size > 0
    when 'L'
      x -= 1 if keypad[y][x - 1].size > 0
    when 'R'
      x += 1 if keypad[y][x + 1].size > 0
    end
  end
  code += keypad[y][x]
end
puts code
