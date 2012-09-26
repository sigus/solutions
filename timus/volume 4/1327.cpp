#include <cstdio>

int main() {
    int a, b, c;
    scanf(" %d %d", &a, &b);
    c = (b - a + 1)/2;
    if ((b - a + 1)%2 && a%2)
        c++;
    printf("%d", c);
    return 0;
}
