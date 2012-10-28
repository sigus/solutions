#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);
    if ((n+1)/2%2)
        puts("grimy");
    else
        puts("black");
    return 0;
}

