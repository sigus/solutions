#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);
    int maxh = 0, minh = 101, maxn, minn;
    for (int i = 0; i < n; i++) {
        int a;
        scanf(" %d", &a);
        if (a > maxh) {
            maxh = a;
            maxn = i;
        }
        if (a <= minh) {
            minh = a;
            minn = i;
        }
    }
    printf("%d", maxn + n - 1 - minn + (maxn > minn ? -1 : 0));
    return 0;
}

