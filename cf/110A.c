#include <stdio.h>
#include <string.h>

int islucky(int a) {
    char s[5];
    sprintf(s, "%d", a);
    int l = strlen(s);
    for (int i = 0; i < l; i++)
        if (s[i] != '4' && s[i] != '7')
            return 0;
    return 1;
}

int main() {
    char s[20];
    fgets(s, 20, stdin);
    size_t l = strlen(s) - 1;
    int c = 0;
    for (size_t i = 0; i < l; i++)
        if (s[i] == '4' || s[i] == '7')
            c++;
    if (islucky(c))
        puts("YES");
    else
        puts("NO");
    return 0;
}

