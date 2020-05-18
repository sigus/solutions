#include <stdio.h>
#include <math.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n, g[5] = {};
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int s;
        scanf(" %d", &s);
        g[s]++;
    }
    g[1] = max(g[1] - g[3], 0);
    if (g[2]%2)
        g[1] = max(g[1] - 2, 0);
    g[2] = (int) ceil(g[2]/2.0);
    g[1] = (int) ceil(g[1]/4.0);
    printf("%d", g[4] + g[3] + g[2] + g[1]);
    return 0;
}

