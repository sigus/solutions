#include <stdio.h>

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);
    int prev_a = 1;
    long long int s = 0;
    for (int i = 0; i < m; i++) {
        int a;
        scanf(" %d", &a);
        s += a >= prev_a ? a - prev_a : a + n - prev_a;
        prev_a = a;
    }
    printf("%lld", s);
}

