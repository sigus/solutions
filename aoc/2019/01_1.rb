p STDIN.read.split.map(&:to_i).inject(0) { |s, x| s + x/3 - 2 }
