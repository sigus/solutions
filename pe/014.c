#include <stdio.h>

int main() {
    int m = 0, mi;
    for (int i = 1; i <= 1000000; i++) {
        int c = 1;
        long long int n = i;
        while (n != 1) {
            n = n%2 ? 3*n + 1 : n/2;
            c++;
        }
        if (c > m) {
            m = c;
            mi = i;
        }
    }
    printf("%d\n", mi);
    return 0;
}

