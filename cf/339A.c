#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    char s[102], g[4], m = 0;
    fgets(s, 102, stdin);
    size_t l = strlen(s) - 1;
    for (size_t i = 0; i < l; i++)
        if (s[i] != '+') {
            int ind = s[i] - '1' + 1;
            g[ind]++;
            m = max(m, ind);
        }
    for (int i = 1; i <= 3; i++)
        for (int j = 0; j < g[i]; j++)
            if (i == m && j == g[i] - 1)
                printf("%d", i);
            else
                printf("%d+", i);
    return 0;
}

