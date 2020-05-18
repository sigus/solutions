#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            int a;
            scanf(" %d", &a);
            if (a == 1) {
                y = i;
                x = j;
                break;
            }
        }
    printf("%d", abs(y - 2) + abs(x - 2));
    return 0;
}

