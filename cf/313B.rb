s = gets.split('')
a = [0]
(1..s.size - 1).each{|i| a << (s[i - 1] == s[i] ? a.last + 1 : a.last)}
m = gets.to_i
m.times do
    l, r = gets.split.map{|x| x.to_i}
    puts a[r - 1] - a[l - 1]
end
