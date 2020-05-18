prg = STDIN.read.split(',').map(&:to_i)
(0..99).each do |noun|
  (0..99).each do |verb|
    m = prg.dup
    m[1..2] = [noun, verb]
    pos = 0
    while m[pos] != 99
      case m[pos]
        when 1
          m[m[pos + 3]] = m[m[pos + 1]] + m[m[pos + 2]]
        when 2
          m[m[pos + 3]] = m[m[pos + 1]] * m[m[pos + 2]]
        else
          break
      end
      pos += 4
    end
    if m[0] == 19690720
      p 100 * noun + verb
      exit
    end
  end
end
