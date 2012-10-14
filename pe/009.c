#include <stdio.h>

int main() {
    for (int c = 0; c < 1000; c++)
        for (int b = 0; b < c; b++)
            for (int a = 0; a < b; a++)
                if (a*a + b*b == c*c && a + b + c == 1000) {
                    printf("%d\n", a*b*c);
                    return 0;
                }
}

