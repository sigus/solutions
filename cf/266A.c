#include <stdio.h>

int main() {
    int n, ans = 0;
    char s[51];
    scanf(" %d %s", &n, s);
    for (size_t i = 1; i < n; i++)
        if (s[i] == s[i - 1])
            ans++;
    printf("%d", ans);
    return 0;
}

