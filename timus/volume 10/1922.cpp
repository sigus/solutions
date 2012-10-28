#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector< pair<int, int> > a(n);
    for (int i = 0; i < n; i++) {
       cin >> a[i].first;
       a[i].second = i;
    }
    sort(a.begin(), a.end());
    vector< vector<int> > v;
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i].first <= i + 1) {
            v.push_back(vector<int>());
            for (int j = i; j >= 0; j--)
                v.back().push_back(a[j].second + 1);
            while (--i >= 0)
                if (a[i].first > i + 1)
                    break;
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].size() << ' ';
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << ' ';
        cout << endl;
    }
    return 0;
}

