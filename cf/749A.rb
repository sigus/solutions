n = gets.to_i
puts(n/2)
puts(n%2 == 0 ? "2 "*(n/2) : "2 "*((n-3)/2) + "3")
