#include <stdio.h>

int main() {
    int n, g[101] = {}, s1 = 0, s2 = 0, ncoins = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf(" %d", &a);
        g[a]++;
        s1 += a;
    }
    for (int i = 100; ; i--)
        for (int j = g[i]; j > 0; j--) {
            s1 -= i;
            s2 += i;
            ncoins++;
            if (s1 < s2) {
                printf("%d", ncoins);
                return 0;
            }
        }
}

