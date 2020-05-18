c = 0
STDIN.read.split.each do |x|
  next if x.scan(/([a-z][a-z])[a-z]*\1/).size < 1
  next if x.scan(/([a-z])[a-z]\1/).size < 1
  c += 1
end
p c
