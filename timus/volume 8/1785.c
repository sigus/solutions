#include <stdio.h>

int main() {
    int a[9] = { 4, 9, 19, 49, 99, 249, 499, 999, 2000 };
    char *s[9] = { "few", "several", "pack", "lots",
        "horde", "throng", "swarm", "zounds", "legion"};
    int n, i = 0;
    scanf(" %d", &n);
    while (n > a[i++]);
    puts(s[--i]);
    return 0;
}

