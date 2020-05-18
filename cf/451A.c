#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);
    if (min(n, m)%2)
        puts("Akshat");
    else
        puts("Malvika");
    return 0;
}

