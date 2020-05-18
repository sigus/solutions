#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
} dragon;

int dragon_cmp(const void *a, const void *b) {
    return ((dragon*) a)->x - ((dragon*) b)->x;
}

int main() {
    int s, n;
    scanf(" %d %d", &s, &n);
    dragon d[n];
    for (int i = 0; i < n; i++)
        scanf(" %d %d", &d[i].x, &d[i].y);
    qsort(d, n, sizeof(dragon), dragon_cmp);
    for (int i = 0; i < n; i++)
        if (s <= d[i].x) {
            puts("NO");
            return 0;
        } else
            s += d[i].y;
    puts("YES");
}

