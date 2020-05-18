s = STDIN.read.strip
first_found = false
loop do
  a = s.split('').map{|x| x.ord - 'a'.ord}

  a[-1] += 1
  i = -1
  while a[i] > 25 && i > -a.size
    a[i] %= 26
    a[i - 1] += 1
    i -= 1
  end

  if a[0] > 25
    s = 'aaaaaaaa'
  else
    s = a.map{|x| (x + 'a'.ord).chr}.join
  end

  next if a.any?('i'.ord - 'a'.ord) || a.any?('o'.ord - 'a'.ord) || a.any?('l'.ord - 'a'.ord)
  f1, f2 = 0, false
  i = 1
  while i < a.size
    (f1 += 1; i += 1) if a[i - 1] == a[i]
    i += 1
  end
  (2...a.size).each{|i| f2 = true if a[i - 2].ord == a[i].ord - 2 && a[i - 1].ord == a[i].ord - 1}
  next if f1 < 2 || !f2
  if !first_found
    first_found = true
  else
    puts s
    exit
  end
end
