$h, $m = {}, {}

def signal(name)
  return $m[name] if $m[name]
  return $m[name] = name.to_i unless $h[name]
  case $h[name].size
  when 1
    $m[name] = signal($h[name][0])
  when 2
    $m[name] = ~signal($h[name][1])&2**16-1
  when 3
    case $h[name][1]
    when 'AND'
      $m[name] = signal($h[name][0])&signal($h[name][2])
    when 'OR'
      $m[name] = signal($h[name][0])|signal($h[name][2])
    when 'LSHIFT'
      $m[name] = signal($h[name][0])<<signal($h[name][2])
    when 'RSHIFT'
      $m[name] = signal($h[name][0])>>signal($h[name][2])
    end
  end
end

STDIN.read.split(/\n/).each do |line|
  instr = line.split
  $h[instr[-1]] = instr[0..-3]
end
p(signal('a'))
