s, v_1, v_2, t_1, t_2 = gets.split.map{|x| x.to_i}
f, s = 2*t_1 + s*v_1, 2*t_2 + s*v_2
puts(if f < s
    'First'
elsif f > s
    'Second'
else
    'Friendship'
end)
