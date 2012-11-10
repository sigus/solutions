#include <algorithm>
#include <climits>
#include <cstdio>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n;
    scanf(" %d", &n);
    vector< pair<int, int> > v(n + 1);
    for (int i = 1; i <= n; i++)
        scanf(" %d %d", &v[i].second, &v[i].first);
    sort(v.begin(), v.end());
    v[0].first = INT_MAX;
    int ans = v.back().first;
    for (int i = v.size() - 1; i; i--)
        ans = min(ans - v[i].second, v[i - 1].first);
    printf("%d", ans);
    return 0;
}

