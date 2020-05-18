#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> b(n);
    for (int i = 0; i < n - 1; i++)
        cin >> b[i];
    b[n - 1] = 1000000000 + 1;
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
        if (a[i] != b[i]) {
            cout << a[i] << endl;
            break;
        }
    vector<int> c(n);
    for (int i = 0; i < n - 2; i++)
        cin >> c[i];
    c[n - 2] = c[n - 1] = b[n - 1];
    sort(c.begin(), c.end());
    for (int i = 0; i < n; i++)
        if (b[i] != c[i]) {
            cout << b[i];
            break;
        }
}

