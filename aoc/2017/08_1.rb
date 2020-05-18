h = {}
STDIN.read.split(/\n/).each do |line|
  inst, cond = line.split('if')
  reg, op, arg = inst.split
  h[reg] ||= 0
  h[cond.split[0]] ||= 0
  arg = arg.to_i
  h[reg] += op == 'inc' ? arg : -arg if eval cond.gsub(/([a-z]+)/, "h['\\1']")
end
p h.values.max
