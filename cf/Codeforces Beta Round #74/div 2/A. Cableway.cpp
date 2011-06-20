#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int r, g, b;
    cin >> r >> g >> b;
    cout << max(27 + 3*((int) ceil(r/2.0)), max(28 + 3*((int) ceil(g/2.0)), 29 + 3*((int) ceil(b/2.0))));
    return 0;
}