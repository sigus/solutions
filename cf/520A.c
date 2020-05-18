#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    scanf(" %d ", &n);
    int v[256] = {};
    for (int i = 0; i < n; i++) {
        char c;
        scanf("%c", &c);
        v[tolower(c)]++;
    }
    for (char c = 'a'; c <= 'z'; c++)
        if (!v[c]) {
            puts("NO");
            return 0;
        }
    puts("YES");
}

