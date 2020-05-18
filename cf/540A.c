#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    scanf(" %d ", &n);
    char s1[n + 2], s2[n + 2];
    fgets(s1, n + 2, stdin);
    fgets(s2, n + 2, stdin);
    int s = 0;
    for (int i = 0; i < n; i++)
        s += min(abs(s1[i] - s2[i]), min(s1[i], s2[i]) + 10 - max(s1[i], s2[i]));
    printf("%d", s);
}

