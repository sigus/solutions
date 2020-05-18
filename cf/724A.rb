a = [8, 4, 2, 6]
n = gets.to_i
puts(n == 0 ? 1 : a[(n - 1)%4])
