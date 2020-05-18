#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int t = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1)
            t++;
    }
    int mx = -100;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            int d = 0;
            for (int k = i; k <= j; k++)
                d += a[k] == 0 ? 1 : -1;
            mx = max(mx, d);
        }
    cout << t + mx;
}

