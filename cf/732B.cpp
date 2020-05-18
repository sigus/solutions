#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int d = 0;
    for (int i = 1; i < n; i++) {
        int cd = a[i - 1] + a[i] - k;
        if (cd < 0) {
            a[i] += -cd;
            d += -cd;
        }
    }
    cout << d << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
}
