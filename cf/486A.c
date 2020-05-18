#include <stdio.h>

int main() {
    long long int n;
    scanf(" %lld", &n);
    long long int ans = (n + 1)/2;
    if (n%2)
        ans = -ans;
    printf("%lld", ans);
    return 0;
}

