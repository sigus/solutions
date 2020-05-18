STDIN.read.split(/\n/).each do |line|
  s = line.split('-')
  id = s[-1].to_i
  name = s[0..-2].join.split('').map{|x|((x.ord-'a'.ord+id)%26+'a'.ord).chr}.join
  p id if /north/ =~ name
end
