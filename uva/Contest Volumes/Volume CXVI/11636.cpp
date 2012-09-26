#include <cstdio>

int main() {
    int n;
    scanf(" %d", &n);
    int i = 0;
    while (n >= 0) {
        int r = 0, a = 1;
        while (a < n) {
            a *= 2;
            r++;
        }
        i++;
        printf("Case %d: %d\n", i, r);
        scanf(" %d", &n);
    }
    return 0;
}
