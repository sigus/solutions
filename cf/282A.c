#include <stdio.h>

int main() {
    int n, ans = 0;
    scanf(" %d ", &n);
    for (int i = 0; i < n; i++) {
        char s[5];
        fgets(s, 5, stdin);
        if (s[1] == '+')
            ans++;
        else
            ans--;
    }
    printf("%d", ans);
    return 0;
}

