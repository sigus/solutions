h = {}
STDIN.read.split(/\n/).each do |line|
    claim = line.split
    x1, y1 = claim[2].split(',').map(&:to_i)
    dx, dy = claim[3].split('x').map(&:to_i)
    (x1...x1+dx).each do |x|
        (y1...y1+dy).each do |y|
            h[[x, y]] = 0 unless h[[x, y]]
            h[[x, y]] += 1
        end
    end
end
ans = 0
h.each{|x| ans += 1 if x[1] > 1}
puts ans
