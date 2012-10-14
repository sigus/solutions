#include <stdio.h>

int main() {
    long long int n = 600851475143;
    int ans;
    for (int i = 2; n != 1; i++)
        while (!(n%i))
            n /= i, ans = i;
    printf("%d\n", ans);
    return 0;
}

