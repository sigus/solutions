#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mn = 100 + 1, s = 0;
    for (int i = 0; i < n; i++) {
        int a, p;
        cin >> a >> p;
        mn = min(p, mn);
        s += a*mn;
    }
    cout << s;
}

