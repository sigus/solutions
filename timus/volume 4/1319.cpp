#include <cstdio>

int main() {
    int n;
    scanf(" %d", &n);
    int c = 0, a[100][100];
    for (int i = n - 1; i >= 0; i--) 
        for (int j = i; j < n; j++) {
            a[j - i][j] = ++c;
            a[n - 1 - j + i][n - 1 - j] = n*n - c + 1; 
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            printf("%d ", a[i][j]);
        puts("");
    }
    return 0;
}
