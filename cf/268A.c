#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);
    int h[30], a[30];
    for (int i = 0; i < n; i++) 
        scanf(" %d %d", &h[i], &a[i]);
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            if (h[i] == a[j])
                ans++;
            if (h[j] == a[i])
                ans++;
        }
    printf("%d", ans);
    return 0;
}

