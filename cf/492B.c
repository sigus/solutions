#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int n, l;
    scanf(" %d %d", &n, &l);
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf(" %d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    double d = a[0] > l - a[n - 1] ? a[0] : l - a[n - 1];
    for (int  i = 1; i < n; i++)
        if ((a[i] - a[i - 1])/2.0 > d)
            d = (a[i] - a[i - 1])/2.0;
    printf("%f", d);
    return 0;
}


