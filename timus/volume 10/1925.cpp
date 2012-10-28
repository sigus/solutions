#include <cstdio>

int main() {
    int n, k;
    scanf(" %d %d", &n, &k);
    int expected = k - 2, actual = 0;
    for (int i = 0; i < n; i++) {
        int b, g;
        scanf(" %d %d", &b, &g);
        expected += b - 2;
        actual += g;
    }
    if (actual <= expected)
        printf("%d", expected - actual);
    else
        puts("Big Bang!");
    return 0;
}

