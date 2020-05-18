$prg, subprg = {}, []
STDIN.read.split(/\n/).each do |line|
  s = line.split
  $prg[s[0]] = {
    :w => s[1][1..-2].to_i,
    :subprg => []
  }
  (3...s.size).each do |i|
    s[i] = s[i][0..-2] if s[i][-1] == ','
    $prg[s[0]][:subprg] << s[i]
    subprg << s[i]
  end
end
root = ($prg.keys - subprg)[0]

def calc_total(name)
  $prg[name][:total] ||=
    $prg[name][:w] +
    $prg[name][:subprg].inject(0){|s, x|
      $prg[x][:parent] = name
      s + calc_total(x)
    }
end

calc_total(root)

def find_unbalanced(name)
  n = $prg[name][:subprg].map{|x|
    $prg[name][:subprg].count{|y|
      $prg[y][:total] == $prg[x][:total]
    }
  }
  if n.uniq.size == 1
    puts($prg[name][:w] + $prg[$prg[name][:parent]][:r] - $prg[name][:total])
    exit
  else
    $prg[name][:r] = $prg[$prg[name][:subprg][n.find_index(1) == 0 ? 1 : 0]][:total]
    find_unbalanced($prg[name][:subprg][n.find_index(1)])
  end
end

find_unbalanced(root)
