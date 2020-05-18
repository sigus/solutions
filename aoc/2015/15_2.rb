$capacity, $durability, $flavor, $texture, $calories = [], [], [], [], []
STDIN.read.split(/\n/).each do |line|
  s = line.split
  $capacity << s[2].to_i
  $durability << s[4].to_i
  $flavor << s[6].to_i
  $texture << s[8].to_i
  $calories << s[10].to_i
end

$max_score = 0
$a = []

def bruteforce(remain, depth)
  if depth == $capacity.size - 1
    $a[depth] = remain

    c, d, f, t, k = 0, 0, 0, 0, 0
    (0...$a.size).each do |i|
      c += $capacity[i]*$a[i]
      d += $durability[i]*$a[i]
      f += $flavor[i]*$a[i]
      t += $texture[i]*$a[i]
      k += $calories[i]*$a[i]
    end
    c = [c, 0].max
    d = [d, 0].max
    f = [f, 0].max
    t = [t, 0].max
    m = c*d*f*t
    $max_score = [$max_score, m].max if k == 500
  else
    (0..remain).each do |nteaspoons|
      $a[depth] = nteaspoons
      bruteforce(remain - nteaspoons, depth + 1)
    end
  end
end

bruteforce(100, 0)

p $max_score
