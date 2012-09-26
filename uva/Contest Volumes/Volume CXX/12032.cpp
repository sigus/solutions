#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int ans = 0;
        int a = 0;
        int can = 0;
        for (int i = 0; i < n; i++) {
            int prev_a = a;
            cin >> a;
            int diff = a - prev_a;
            if (diff > ans)
                can = ans = diff;
            if (diff > can)
                can = ++ans;
            if (diff == can)
                can--;
        }
        cout << "Case " << i + 1 << ": " << ans << endl;
    }
    return 0;
}
