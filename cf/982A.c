#include <stdio.h>

int main() {
    int n;
    char s[1002] = {};
    scanf(" %d %s", &n, s + 1);
    s[0] = '0';
    s[n + 1] = '0';
    for (int i = 1; i <= n; i++) {
        if (s[i] == '1')
            if (s[i - 1] != '0' || s[i + 1] != '0') {
                puts("No");
                return 0;
            }
        if (s[i] == '0')
            if (s[i - 1] == '0' && s[i + 1] == '0') {
                puts("No");
                return 0;
            }
    }
    puts("Yes");
}

