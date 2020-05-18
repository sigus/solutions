p STDIN.read.split.inject(0){|n, ip|
  aba = /(?=(\w)(?!\1)(\w)\1)/
  brck = /\[\w*\]/
  abas = ip.gsub(brck, '[]').scan(aba)
  inner = ip.scan(brck).join
  n + (abas.inject(false){|f, a| f || inner =~ /#{a[1]}#{a[0]}#{a[1]}/} ? 1 : 0)
}
