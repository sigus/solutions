a = STDIN.read.split(/\n/)
(0...a.size).each do |i|
    (i+1...a.size).each do |j|
        ndiff = 0
        (0...a[i].size).each do |k|
            if a[i][k] != a[j][k]
                ndiff += 1
            end
        end
        if ndiff == 1
            ans = ''
            (0...a[i].size).each do |k|
                ans += a[i][k] if a[i][k] == a[j][k]
            end
            puts ans
            exit
        end
    end
end
