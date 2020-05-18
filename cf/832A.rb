n, k = gets.split.map(&:to_i)
case (n - k)%(2*k)
when 0..k-1
  puts "YES"
when k..2*k-1
  puts "NO"
end