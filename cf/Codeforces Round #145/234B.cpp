#include <algorithm>
#include <cstdio>
#include <vector>
#include <utility>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    scanf(" %d %d", &n, &k);
    
    vector< pair<int, int> > a;
    for (int i = 0; i < n; i++) {
        int a_i;
        scanf(" %d", &a_i);
        a.push_back(make_pair(a_i, i));
    }
    
    sort(a.begin(), a.end());
    printf("%d\n", a[n - k].first);
    for (int  i = n - k; i < n; i++)
        printf("%d ", a[i].second + 1);
    return 0;
}

