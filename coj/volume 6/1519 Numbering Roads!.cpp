#include <cstdio>

int main() {
    for (int i = 1; ; i++) {
        int n, r;
        scanf(" %d %d", &n, &r);
        if (n == 0)
            break;
        int ans = n/r;
        if (!(n%r))
            ans--;
        printf("Case %d: ", i);
        if (ans <= 26)
            printf("%d\n", ans);
        else
            puts("impossible");
    }
    return 0;
}
