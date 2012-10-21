#include <cstdio>

int main() {
    int n, a[1000];
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", &a[i]);
    int m = 0, mn = 0;
    for (int i = 0; i < n - 2; i++) {
        int s = a[i] + a[i + 1] + a[i + 2];
        if (s > m) {
            m = s;
            mn = i + 1;
        }
    }
    printf("%d %d", m, mn + 1);
    return 0;
}

