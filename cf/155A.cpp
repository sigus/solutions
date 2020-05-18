#include <iostream>
using namespace std;

int main() {
    int n, a, mn, mx, ans = 0;
    cin >> n >> a;
    mn = mx = a;
    for (int i = 1; i < n; i++) {
        cin >> a;
        if (a < mn) {
            mn = a;
            ans++;
        }
        if (a > mx) {
            mx = a;
            ans++;
        }
    }
    cout << ans;
}

