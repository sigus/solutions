#include <stdio.h>

int main() {
    int n, k, i, ak;
    scanf(" %d %d", &n, &k);
    for (i = 0; i < n; i++) {
        int a;
        scanf(" %d", &a);
        if (a == 0)
            break;
        if (i == k - 1)
            ak = a;
        if (i > k - 1 && a < ak)
            break;
    }
    printf("%d", i);
    return 0;
}

