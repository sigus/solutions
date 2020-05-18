#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[102];
    fgets(s, 102, stdin);
    size_t l = strlen(s) - 1;
    int w = 1;
    for (size_t i = 1; i < l; i++)
        w = w && isupper(s[i]);
    if (w)
        for (size_t i = 0; i < l; i++)
            if (isupper(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
    printf("%s", s);
    return 0;
}

