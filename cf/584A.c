#include <stdio.h>

int main() {
    int n, t;
    scanf(" %d %d", &n, &t);
    if (t == 10)
        if (n == 1)
            puts("-1");
        else
            for (int i = 0; i < n; i++)
                printf("%c", !i ? '1' : '0');
    else
        for (int i = 0; i < n; i++)
            printf("%d", t);
}

