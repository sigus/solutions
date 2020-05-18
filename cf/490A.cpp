#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v[4];
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v[t].push_back(i + 1);
    }
    int w = min(v[1].size(), min(v[2].size(), v[3].size()));
    cout << w << endl;
    for (int i = 0; i < w; i++)
        cout << v[1][i] << ' ' << v[2][i] << ' ' << v[3][i] << endl;
}

