#include <cstdio>

int main() {
    int n;
    scanf(" %d", &n);
    if (n < 21)
        printf("%d", -1);
    else if (n == 21)
        printf("%d", 1);
    else {
        int l = 30;
        int r = 40;
        int ans = 2;
        while (1) {
            if (l > 1000000) {
                printf("%d", -1);
                break;
            }
            if (l <= n && n <= r) {
                printf("%d", ans);
                break;
            }
            l += 14;
            r += 14;
            ans++;
        }
    }
    return 0;
}
