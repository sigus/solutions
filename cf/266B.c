#include <stdio.h>

void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int n, t;
    char s[52];
    scanf(" %d %d %s", &n, &t, s);
    for (int i = 1; i <= t; i++)
        for (int j = 0; j < n - 1; j++)
            if (s[j] == 'B' && s[j + 1] == 'G') {
                swap(&s[j], &s[j + 1]);
                j++;
            }
    puts(s);
    return 0;
}

