#include <stdio.h>

int main() {
    char s1[102], s2[102];
    fgets(s1, 102, stdin);
    fgets(s2, 102, stdin);
    char *p1 = s1, *p2 = s2;
    while (*p1 != '\n')
        printf("%c", *p1++ == *p2++ ? '0' : '1');
    return 0;
}

