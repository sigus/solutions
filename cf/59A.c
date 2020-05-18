#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[102];
    fgets(s, 102, stdin);
    int l = 0, u = 0, len = strlen(s);
    for (int i = 0; i < len; i++)
        if (islower(s[i]))
            l++;
        else if (isupper(s[i]))
            u++;
    for (int i = 0; i < len; i++)
        putc(l >= u ? tolower(s[i]) : toupper(s[i]), stdout);
    return 0;
}

