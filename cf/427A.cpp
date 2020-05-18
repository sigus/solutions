#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int f = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > 0)
            f += a;
        else if (f)
            f--;
        else
            ans++;
    }
    cout << ans;
}

