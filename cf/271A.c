#include <stdio.h>

int isywdiffd(int a) {
    int vis[10] = {};
    while (a) {
        int d = a%10;
        vis[d]++;
        if (vis[d] > 1)
            return 0;
        a /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf(" %d", &n);
    for (int i = n + 1; ; i++)
        if (isywdiffd(i)) {
            printf("%d", i);
            return 0;
        }
}

