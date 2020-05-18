n = gets.to_i
a = gets.split.map{|x| x.to_i}
q, h = 0, 0
(0..a.size - 1).each do |i|
    case a[i]
    when 25
        q += 1
    when 50
        if q == 0
            puts "NO"
            exit 0
        end
        h += 1
        q -= 1
    when 100
        if h > 0 && q > 0
            h -= 1
            q -= 1
        elsif q >= 3
            q -= 3
        else
            puts "NO"
            exit 0
        end
    end
end
puts "YES"
