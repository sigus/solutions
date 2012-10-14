#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1, j = 2; j <= 4000000; j += i, i = j - i)
        if (!(j%2))
            sum += j;
    printf("%d\n", sum);
    return 0;
}

