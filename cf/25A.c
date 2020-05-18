#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);
    int nodds = 0, last_even, last_odd;
    for (int i = 0; i < n; i++) {
        int a;
        scanf(" %d", &a);
        if (a%2) {
            nodds++;
            last_odd = i + 1;
        } else
            last_even = i + 1;
    }
    printf("%d", nodds > 1 ? last_even : last_odd);
}

