s = STDIN.read.strip
50.times{s.gsub!(/(\d)(\1*)/){|match| ($2.size + 1).to_s + $1}}
p s.size
