h = {}
v = {}
ids = {}
STDIN.read.split(/\n/).each do |line|
    claim = line.split
    id = claim[0]
    v[id] = true
    x1, y1 = claim[2].split(',').map(&:to_i)
    dx, dy = claim[3].split('x').map(&:to_i)
    (x1...x1+dx).each do |x|
        (y1...y1+dy).each do |y|
            v[id] = false if h[[x, y]]
            h[[x, y]] = 0 unless h[[x, y]]
            h[[x, y]] += 1

            ids[[x, y]] = [] unless ids[[x, y]]
            ids[[x, y]].each{|id| v[id] = false}
            ids[[x, y]].push id
        end
    end
end
p v.select{|key, val| val}
