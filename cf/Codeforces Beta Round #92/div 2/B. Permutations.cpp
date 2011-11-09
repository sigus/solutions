#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n, k;    
    cin >> n >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> a(k);
    for (int i = 0; i < k; i++)
        a[i] = i;
    int ans = INT_MAX;
    do {
        int mn = INT_MAX, mx = 0;
        for (int i = 0; i < n; i++) {
            string s(k, 0);
            for (int j = 0; j < k; j++)
                s[j] = v[i][a[j]]; 

            stringstream ss(s);
            int x;
            ss >> x;

            mn = min(mn, x);
            mx = max(mx, x);
        }
        ans = min(ans, mx - mn);
    } while (next_permutation(a.begin(), a.end()));
    
    cout << ans;
    return 0;
}
