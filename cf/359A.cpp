#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            if (a == 1 && (i == 0 || i == n - 1 || j == 0 || j == m - 1)) {
                cout << 2;
                return 0;
            }
        }
    cout << 4;
}

