h = {
    'Tetrahedron' => 4,
    'Cube' => 6,
    'Octahedron' => 8,
    'Dodecahedron' => 12,
    'Icosahedron' => 20
}
n = gets.to_i
nh = 0
n.times do
    s = gets.strip
    nh += h[s]
end
puts nh

