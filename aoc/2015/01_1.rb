floor = 0
STDIN.read.split('').each{|x| x == '(' ? floor += 1 : floor -= 1}
p floor
