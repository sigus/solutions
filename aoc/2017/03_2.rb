class MyArray
  def initialize
    @h = {}
  end

  def [](x, y)
    @h[[x, y]] || 0
  end

  def []=(x, y, val)
    @h[[x, y]] = val
  end
end

x, y, r, i, dx, dy = 0, 0, STDIN.read.to_i, 2, 1, 0
a = MyArray.new
a[0, 0] = 1
loop do
  (i/2).times do
    x += dx
    y += dy
    s = 0
    (-1..1).each do |i|
      (-1..1).each do |j|
        s += a[x + i, y + j]
      end
    end
    if s > r
      p s
      exit
    else
      a[x, y] = s
    end
  end    
  dx, dy = -dy, dx
  i += 1
end
