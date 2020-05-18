#include <stdio.h>

int main() {
    int n, a[101] = {};
    scanf(" %d ", &n);
    for (int i = 1; i <= n; i++) {
        int p;
        scanf(" %d", &p);
        a[p] = i;
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    return 0;
}

