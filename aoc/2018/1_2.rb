h = {0 => 1}
s = 0
a = STDIN.read.split.map{|x| x.to_i}
while true
    a.each do |x|
        s += x
        h[s] = 0 unless h[s]
        h[s] += 1
        if h[s] == 2
            p s
            exit
        end
    end
end
