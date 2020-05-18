#include <stdio.h>

int main() {
    int a, b;
    scanf(" %d %d", &a, &b);
    int ans = 0;
    while (a) {
        if (a >= b) {
            a -= b - 1;
            ans += b;
        } else {
            ans += a;
            a = 0;
        }        
    }
    printf("%d", ans);
    return 0;
}

