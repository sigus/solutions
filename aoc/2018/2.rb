ntwo, nthree = 0, 0
STDIN.read.split(/\n/).each do |line|
    two, three = false, false
    ('a'..'z').each do |ch|
        two = true if line.split('').count{|x| x == ch} == 2
        three = true if line.split('').count{|x| x == ch} == 3
    end
    ntwo += 1 if two
    nthree += 1 if three
end
p ntwo*nthree
