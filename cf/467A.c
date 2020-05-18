#include <stdio.h>

int main() {
    int n, ans = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int p, q;
        scanf(" %d %d", &p, &q);
        if (q - p > 1)
            ans++;
    }
    printf("%d", ans);
    return 0;
}

