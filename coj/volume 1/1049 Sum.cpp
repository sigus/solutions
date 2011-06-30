#include <cstdio>

int main() {
    int n;
    scanf(" %d", &n);
    printf("%d", n < 0 ? n*(1 - n)/2 + 1 : n*(n + 1)/2);
    return 0;
}
