require 'digest'

i = 0
password = []
id = STDIN.read.strip

while password.count{|x| x} != 8 do
  md5 = Digest::MD5.hexdigest id + i.to_s
  pos = md5[5] =~ /[0-9]/ ? md5[5].to_i : nil
  if md5[0..4] == '00000' && (0..7) === pos
      password[pos] ||= md5[6]
  end
  i += 1
end

puts password.join
