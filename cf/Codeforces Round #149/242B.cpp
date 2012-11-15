#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector< pair<int, int> > v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    int l = v[0].first, r = v[0].second;
    for (int i = 1; i < n; i++)
        l = min(l, v[i].first), r = max(r, v[i].second);
    for (int i = 0; i < n; i++)
        if (v[i].first <= l && r <= v[i].second) {
            cout << i + 1;
            return 0;
        }
    cout << -1;
}

