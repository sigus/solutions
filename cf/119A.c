#include <stdio.h>

int gcd(int a, int b) {
    while (a && b)
        if (a > b)
            a %= b;
        else
            b %= a;
    return a + b;
}

int main() {
    int a, b, n;
    scanf(" %d %d %d", &a, &b, &n);
    for (int i = 0; ; i++) {
        int m = i%2 ? gcd(b, n) : gcd(a, n);
        if (m > n) {
            if (i%2)
                puts("0");
            else
                puts("1");
            return 0;
        }
        n -= m;
    }
}

