require 'digest'

i = 0
password = ''
id = STDIN.read.strip

8.times do
  md5 = nil
  loop do
    md5 = Digest::MD5.hexdigest id + i.to_s
    i += 1
    break if md5[0..4] == '00000'
  end
  password += md5[5]
end
puts password
