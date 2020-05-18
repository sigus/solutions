#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (!(n%i))
            return 0;
    return 1;
}

int main() {
    int n;
    scanf(" %d", &n);
    for (int i = 4; ; i++) 
        if (!is_prime(i) && !is_prime(n - i)) {
            printf("%d %d", i, n - i);
            return 0;
        }
}

