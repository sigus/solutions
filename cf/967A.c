#include <stdio.h>

int main() {
    int n, s;
    scanf(" %d %d", &n, &s);
    int a[n + 1];
    a[0] = -s - 1;
    for (int i = 1; i <= n; i++) {
        int h, m;
        scanf(" %d %d", &h, &m);
        a[i] = h*60 + m;
    }
    int t = a[n] + 1 + s;
    for (int i = 1; i <= n; i++)
        if (a[i] - a[i - 1] >= 2*s + 2) {
            t = a[i - 1] + 1 + s;
            break;
        }
    printf("%d %d", t/60, t%60);
}

