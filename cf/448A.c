#include <stdio.h>

int main() {
    int a_1, a_2, a_3, b_1, b_2, b_3, n;
    scanf(" %d %d %d %d %d %d %d", &a_1, &a_2, &a_3, &b_1, &b_2, &b_3, &n);
    int ncups = a_1 + a_2 + a_3;
    int nmedals = b_1 + b_2 + b_3;
    int nshelves = (ncups + 4)/5 + (nmedals + 9)/10;
    if (nshelves <= n)
        puts("YES");
    else
        puts("NO");
}

