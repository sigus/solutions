#include <stdio.h>

int main() {
    char s[102];
    fgets(s, 102, stdin);
    int v1[256] = {}, v2[256] = {};
    char *p = s;
    while (*p != '\n')
        v1[*p++]++;
    fgets(s, 102, stdin);
    p = s;
    while (*p != '\n')
        v1[*p++]++;
    fgets(s, 102, stdin);
    p = s;
    while (*p && *p != '\n')
        v2[*p++]++;
    for (char c = 'A'; c <= 'Z'; c++)
        if (v1[c] != v2[c]) {
            puts("NO");
            return 0;
        }
    puts("YES");
}

