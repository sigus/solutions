#include <stdio.h>

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);
    int i;
    for (i = 1; n; i++) {
        n--;
        if (!(i%m))
            n++;
    }
    printf("%d", i - 1);
    return 0;
}

