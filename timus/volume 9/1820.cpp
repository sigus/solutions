#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    int n, k;
    scanf(" %d %d", &n, &k);
    int ans = n*2/min(n, k);
    if (n*2%min(n, k))
        ans++;
    printf("%d", ans);
    return 0;
}

