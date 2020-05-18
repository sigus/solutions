#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() {
    int n;
    scanf(" %d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf(" %d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    printf("%d", a[n/2]);
}

