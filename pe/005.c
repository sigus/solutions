#include <stdio.h>

int gcd(int a, int b) {
    while (a && b)
        if (a > b)
            a %= b;
        else
            b %= a;
    return a + b;
}

int lcm(int a, int b) {
    return a/gcd(a, b)*b;
}

int main() {
    int clcm = 1;
    for (int i = 2; i < 21; i++)
        clcm = lcm(clcm, i);
    printf("%d\n", clcm);
    return 0;
}

