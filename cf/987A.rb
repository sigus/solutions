n = gets.to_i
c = []
n.times{c << gets.strip}
h = {
  'purple' => 'Power',
  'green'  => 'Time',
  'blue'   => 'Space',
  'orange' => 'Soul',
  'red'    => 'Reality',
  'yellow' => 'Mind'
}
ans = []
h.each{|k, v| ans << v unless c.any?{|x| x == k}}
p ans.size
ans.each{|x| puts x}
