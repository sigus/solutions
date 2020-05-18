#include <stdio.h>
#include <string.h>

int main() {
    char s[102];
    fgets(s, 102, stdin);
    size_t l = strlen(s) - 1;
    for (size_t i = 0; i < l; i++)
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            puts("YES");
            return 0;
        }
    puts("NO");
    return 0;
}

