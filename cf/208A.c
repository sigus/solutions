#include <stdio.h>
#include <string.h>

int main() {
    char s[201];
    scanf("%s", s);
    size_t l = strlen(s);
    int b = 0, wub = 0;
    for (size_t i = 0; i < l; ) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 3;
            wub = 1;
            continue;
        }
        if (b && wub)
            printf(" ");
        printf("%c", s[i++]);
        wub = 0;
        b = 1;
    }
    return 0;
}

