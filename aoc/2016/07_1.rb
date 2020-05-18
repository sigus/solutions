p STDIN.read.split.inject(0){|n, ip|
  abba = /(\w)(?!\1)(\w)\2\1/
  brck = /\[\w*\]/
  n + (ip.gsub(brck, '[]') =~ abba && ip.scan(brck).join !~ abba ? 1 : 0)
}
