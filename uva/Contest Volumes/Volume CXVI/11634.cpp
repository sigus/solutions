#include <cstdio>

int main() {
    int a;
    scanf(" %d", &a);
    while (a) {
        int m[10000] = {}, c = 0;
        while (!m[a]) {
            m[a] = 1;
            a *= a;
            a /= 100;
            a %= 10000;
            c++;
        }
        printf("%d\n", c);
        scanf(" %d", &a);
    }
    return 0;
}
