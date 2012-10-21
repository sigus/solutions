#include <stdio.h>

int main() {
    int a[20][20];
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            scanf(" %d", &a[i][j]);
    int m = 0;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 17; j++) {
            int p1 = 1, p2 = 1;
            for (int k = 0; k < 4; k++) {
                p1 *= a[i][j + k];
                p2 *= a[j + k][i];
            }
            m = m < p1 ? p1 : m;
            m = m < p2 ? p2 : m;
        }
    for (int i = 0; i < 17; i++)
        for (int j = 0; j < 17; j++) {
            int p1 = 1, p2 = 1;
            for (int k = 0; k < 4; k++) {
                p1 *= a[i + k][j + k];
                p2 *= a[19 - i - k][j + k];
            }
            m = m < p1 ? p1 : m;
            m = m < p2 ? p2 : m;
        }
    printf("%d\n", m);
    return 0;
}

