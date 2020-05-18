#include <stdio.h>

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (!(i%2))
                printf("%c", '#');
            else if (!((i - 1)%4))
                printf("%c", j == m - 1 ? '#' : '.');
            else
                printf("%c", !j ? '#' : '.');
        puts("");
    }
    return 0;
}

