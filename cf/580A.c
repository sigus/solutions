#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    scanf(" %d", &n);
    int l = 0, prev_a = 0, maxl = 0;
    for (int i = 0; i < n; i++) {
        int a;
        scanf(" %d", &a);
        if (a >= prev_a)
            l++;
        else
            l = 1;
        prev_a = a;
        maxl = max(maxl, l);
    }
    printf("%d", maxl);
    return 0;
}

