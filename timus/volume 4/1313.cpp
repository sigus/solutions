#include <cstdio>

int main() {
    int n;
    scanf(" %d", &n);
    int a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf(" %d", &a[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = i; j >= 0; j--)
            printf("%d ", a[j][i - j]);
    for (int i = 1; i < n; i++)
        for (int j = i; j < n; j++)
            printf("%d ", a[n - j + i - 1][j]);
    return 0;
}
