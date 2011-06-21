#include <iostream>
#include <vector>
#include <string> 
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    vector<int> l[256];
    for (int i = 0; i < s1.length(); i++)
        l[s1[i]].push_back(i);
    int ans = 1, pos = 0;
    for (int i = 0; i < s2.length(); i++) {
        vector<int>::iterator j = lower_bound(l[s2[i]].begin(), l[s2[i]].end(), pos);
        if (j == l[s2[i]].end()) {
            pos = 0;
            ans++;
            j = lower_bound(l[s2[i]].begin(), l[s2[i]].end(), pos);
            if (j == l[s2[i]].end()) {
                cout << -1;
                return 0;
            }
        }
        pos = *j + 1;
    }

    cout << ans;
    return 0;
}
