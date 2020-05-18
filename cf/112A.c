#include <stdio.h>
#include <string.h>
#include <ctype.h>

int sgn(int a) {
    if (a < 0)
        return -1;
    if (a > 0)
        return 1;
    return 0;
}

int main() {
    char s1[102], s2[102];
    fgets(s1, 102, stdin);
    fgets(s2, 102, stdin);    
    size_t l = strlen(s1) - 1;
    for (size_t i = 0; i < l; i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    printf("%d", sgn(strcmp(s1, s2)));
    return 0;
}

