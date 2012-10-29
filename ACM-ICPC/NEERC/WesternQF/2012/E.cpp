#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector< pair<int, int> > k(m);
    for (int i = 0; i < m; i++)
        cin >> k[i].first, k[i].second = i + 1;
    sort(k.begin(), k.end());
    vector<int> ans;
    int sum = 0;
    for (int i = k.size() - 1; i >= 0 && sum < n; i--) {
        if (i < k.size() - 1)
            sum--;
        sum += k[i].first, ans.push_back(k[i].second);
        if (sum < n)
            sum--;
    }
    if (sum < n) {
        cout << "Epic fail";
        return 0;
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';
    return 0;
}

