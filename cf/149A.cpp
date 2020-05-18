#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> a(12);
    for (int i = 0; i < a.size(); i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int c = 0, h = 0;
    while (c < 12 && h < k) {
        h += a[a.size() - 1 - c];
        c++;
    }
    if (h >= k)
        cout << c;
    else
        cout << -1;
}

