#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    int k, n;
    scanf(" %d %d", &k, &n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a;
        scanf(" %d", &a);
        ans += a - k;
        ans = max(ans, 0);
    }
    printf("%d", ans);
    return 0;
}

