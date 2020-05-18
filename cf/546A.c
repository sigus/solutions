#include <stdio.h>

int main() {
    int k, n, w;
    scanf(" %d %d %d", &k, &n, &w);
    int ans = k * (1 + w) * w / 2 - n;
    printf("%d", ans > 0 ? ans : 0);
    return 0;
}

