require 'json'

def sum_ints(h)
  case h
  when Integer
    h
  when Array
    h.inject(0){|s, x| s + sum_ints(x)}
  when Hash
    sum_ints(h.flatten)
  else
    0
  end
end

p sum_ints(JSON.parse(STDIN.read))
