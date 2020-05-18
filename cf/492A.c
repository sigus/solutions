#include <stdio.h>

int s(int n) {
    return n*(1 + n)/2;
}

int main() {
    int n;
    scanf(" %d", &n);
    int h = 1;
    while (n >= s(h)) {
        n -= s(h);
        h++;
    }
    printf("%d", h - 1);
}

