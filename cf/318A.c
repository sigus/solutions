#include <stdio.h>

int main() {
    long long n, k;
    scanf(" %lld %lld", &n, &k);
    printf("%lld", k <= (n + 1)/2 ? 1 + 2*(k - 1) : 2*(k - (n + 1)/2));
    return 0;
}

