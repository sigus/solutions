#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    for (int i = 0; i <= 4000; i++)
        for (int j = 0; j <= 4000; j++) {
                int ab = a*i + b*j;
                if (ab <= n && !((n - ab)%c))
                    ans = max(ans, i + j + (n - ab)/c);
        }
    cout << ans;
}

