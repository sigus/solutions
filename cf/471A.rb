l = gets.split.map{|x| x.to_i}
l.sort!{|x, y| l.count(x) <=> l.count(y)}
if l[2] != l[5]
    puts "Alien"
elsif l[0] != l[1]
    puts "Bear"
else
    puts "Elephant"
end
