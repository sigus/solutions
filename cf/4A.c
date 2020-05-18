#include <stdio.h>

int main() {
    int w;
    scanf(" %d", &w);
    if (!(w%2) && w > 2)
        puts("YES");
    else
        puts("NO");
    return 0;
}

