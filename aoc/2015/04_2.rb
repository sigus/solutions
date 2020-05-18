require 'digest'

key = STDIN.read.strip

i = 1
loop do
  md5 = Digest::MD5.hexdigest(key + i.to_s)
  if md5[0..5] == '000000'
    p i
    exit
  end
  i += 1
end
