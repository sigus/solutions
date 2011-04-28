#include <cstdio>

int gcd(int a, int b) {
    while (a && b)
        if (a >= b) 
            a %= b; 
        else 
            b %= a;

    return a + b;
}

int main() {
    int n;
    scanf(" %d", &n);

    int c = 0;
    for (int i = 1; i <= n; i++)
        if (gcd(i, n) == 1)
            c++;

    printf("%d", c);
    return 0;
}
