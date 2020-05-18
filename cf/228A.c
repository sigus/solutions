#include <stdio.h>

int main() {
    int s[4];
    scanf(" %d %d %d %d", &s[0], &s[1], &s[2], &s[3]);
    int ncolors = 0;
    for (int i = 0; i < 4; i++) {
        int u = 1;
        for (int j = 0; j < i; j++)
            u = u && s[i] != s[j];
        if (u)
            ncolors++;
    }
    printf("%d", 4 - ncolors);
    return 0;
}

