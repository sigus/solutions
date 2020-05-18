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
    property = s[i][0..-2]
    c, v = checklist[property], s[i + 1].to_i
    case property
    when 'cats', 'trees'
      f && c < v
    when 'pomeranians', 'goldfish'
      f && c > v
    else
      f && c == v
    end
  }
}.map{|x| x.split[1].to_i}[0]
