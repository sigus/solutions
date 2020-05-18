#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);
    int v[101] = {};
    for (int i = 0; i < n; i++) {
        int a;
        scanf(" %d", &a);
        v[a]++;
    }
    int *p = v;
    while (n) {
        while (!*p++);
        (*--p)--;
        printf("%d ", p - v);
        n--;
    }
}

