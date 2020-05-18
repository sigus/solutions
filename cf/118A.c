#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf(" %d ", &n);
    for (int i = 0; i < n; i++) {
        char s[102];
        fgets(s, 102, stdin);
        size_t l = strlen(s) - 1;
        if (l > 10)
            printf("%c%zu%c\n", s[0], l - 2, s[l - 1]);
        else
            printf("%s", s);
    }
    return 0;
}

