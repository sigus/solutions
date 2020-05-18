#include <stdio.h>
#include <math.h>

int main() {
    int n, m, a;
    scanf(" %d %d %d", &n, &m, &a);
    printf("%lld", (long long int) ceil((n + 0.0)/a) * (int) ceil((m + 0.0)/a));
    return 0;
}

