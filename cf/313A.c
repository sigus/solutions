#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    scanf(" %d", &n);
    if (n > 0) {
        printf("%d", n);
        return 0;
    }
    char s[12], ss[12];
    int l = sprintf(s, "%d", abs(n)), ans = abs(n);
    for (int i = l - 1; i >= l - 2; i--) {
        char t = s[i];
        s[i] = 0;
        memset(ss, 0, 12);
        strcat(ss, s);
        s[i] = t;
        strcat(ss, s + i + 1);
        ans = min(ans, atoi(ss));
    }
    printf("%d", -ans);
}

