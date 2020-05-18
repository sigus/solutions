#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isvowel(char c) {
    switch (c) {
        case 'a': case 'o': case 'y':
        case 'e': case 'u': case 'i':
            return 1;
        default:
            return 0;
    }
}

int main() {
    char s[102];
    fgets(s, 102, stdin);
    size_t l = strlen(s) - 1;
    for (size_t i = 0; i < l; i++) {
        s[i] = tolower(s[i]);
        if (isvowel(s[i]))
            continue;
        printf(".%c", s[i]);
    }
    return 0;
}

