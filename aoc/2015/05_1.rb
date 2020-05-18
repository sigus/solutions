c = 0
STDIN.read.split.each do |x|
  next if x.scan(/[aeiou]/).size < 3
  next if x.scan(/([a-z])\1/).size < 1
  next if x.scan(/(ab|cd|pq|xy)/).size > 0
  c += 1
end
p c
