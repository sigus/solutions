#include <cstdio>

int main() {
    int m, n;
    scanf(" %d %d", &m, &n);
    if (m%2 && n%2)
        puts("[second]=:]");
    else
        puts("[:=[first]");
    return 0;
}
