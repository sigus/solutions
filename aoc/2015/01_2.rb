floor, pos = 0, 0
STDIN.read.split('').each do |x|
  pos += 1
  x == '(' ? floor += 1 : floor -= 1
  if floor == -1
    p pos
    exit
  end
end
