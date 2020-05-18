#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1002];
    fgets(s, 1002, stdin);
    s[0] = toupper(s[0]);
    printf("%s", s);
    return 0;
}

