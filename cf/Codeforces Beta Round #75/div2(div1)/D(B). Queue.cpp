#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> m(n);
    m[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        m[i] = min(a[i], m[i + 1]);
    for (int i = 0; i < n; i++) {
        vector<int>::iterator j = upper_bound(m.begin() + i + 1, m.end(), a[i] - 1);
        j--;
        cout << j - m.begin() - i - 1 << ' ';
    }        
    return 0;
}
