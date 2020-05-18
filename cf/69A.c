#include <stdio.h>

int main() {
    int n, xsum = 0, ysum = 0, zsum = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x, y, z;
        scanf(" %d %d %d", &x, &y, &z);
        xsum += x, ysum += y, zsum += z;
    }
    if (xsum || ysum || zsum)
        puts("NO");
    else
        puts("YES");
    return 0;
}

