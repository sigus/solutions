#include <stdio.h>

int main() {
    int n, t;
    scanf(" %d %d", &n, &t);
    int cell = 0;
    for (int i = 0; i < n - 1; i++) {
        int a;
        scanf(" %d", &a);
        if (i == cell)
            cell += a;
        if (cell == t - 1) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}

