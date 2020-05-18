s = gets
(0...s.size-1).each do |i|
  next if s[i] =~ /[aouien]/
  if i == s.size - 1 || s[i + 1] !~ /[aouie]/
    puts 'NO'
    exit
  end
end
puts 'YES'
