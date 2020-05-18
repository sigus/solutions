#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);
    int nlevels = 0, levels[101] = {};
    for (int i = 0; i < 2; i++) {
        int p;
        scanf(" %d", &p);
        for (int j = 0; j < p; j++) {
            int a;
            scanf(" %d", &a);
            if (!levels[a])
                nlevels++;
            levels[a] = 1;
        }
    }
    if (nlevels == n)
        puts("I become the guy.");
    else
        puts("Oh, my keyboard!");
    return 0;
}

