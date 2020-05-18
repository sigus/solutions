#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1002];
    fgets(s, 1002, stdin);
    size_t l = strlen(s);
    int ans = 0, v[256] = {};
    for (int i = 0; i < l; i++)
        if (isalpha(s[i])) {
            if (!v[s[i]])
                ans++;
            v[s[i]] = 1;
        }
    printf("%d", ans);
    return 0;
}

