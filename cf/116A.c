#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n, c = 0, m = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf(" %d %d", &a, &b);
        c -= a;
        c += b;
        m = max(m, c);
    }
    
    printf("%d", m);
    return 0;
}

