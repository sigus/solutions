gets
gets.split(' ').each do |x|
    if x != "0"
        puts "HARD"
        exit 0
    end
end
puts "EASY"
