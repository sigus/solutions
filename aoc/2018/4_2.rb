guard = nil
h = {}
aw = true
bs = nil
STDIN.read.split(/\n/).sort.each do |line|
    s = line.split
    date, time = s[0][1..-1], s[1][0..-2]
    m = time.split(':')[1].to_i
    case s[2]
    when "Guard"
        (bs...m).each{|i| h[guard][i] += 1} if !aw
        guard = s[3]
        h[guard] = [0]*60 unless h[guard]
        aw = true
    when "wakes"
        (bs...m).each{|i| h[guard][i] += 1}
        aw = true
    when "falls"
        aw = false
        bs = m
    end
end
minute = (0..59).max_by{|i| h.max_by{|k, v| v[i]}[1][i]}
id = h.max_by{|k, v| v[minute]}[0][1..-1].to_i
p id*minute
