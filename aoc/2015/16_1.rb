h = {}
checklist = {
  'children'    => 7,
  'cats'        => 7,
  'samoyeds'    => 2,
  'pomeranians' => 3,
  'akitas'      => 0,
  'vizslas'     => 0,
  'goldfish'    => 5,
  'trees'       => 3,
  'cars'        => 2,
  'perfumes'    => 1
}
p STDIN.read.split(/\n/).select{|line|
  s = line.split
  (2..6).step(2).inject(true){|f, i|
    f && checklist[s[i][0..-2]] == s[i + 1].to_i
  }
}.map{|x| x.split[1].to_i}[0]
