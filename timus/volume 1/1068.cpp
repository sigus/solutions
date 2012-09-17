#include <cstdio>

int main() {
    int n, s = 0;
    scanf(" %d", &n);

    for (int i = 1; n < 1 ? i >= n : i <= n ; n < 1 ? i-- : i++)
        s += i; 

    printf("%d", s);
    return 0;
}
