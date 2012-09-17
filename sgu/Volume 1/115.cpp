#include <cstdio>

const int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);

    if (n > days[m] || n < 1 || m < 1 || m > 12) {
        puts("Impossible");
        return 0;
    }

    int day = 0;
    for (int i = 1; i < m; i++) 
        day += days[i];
    day += n;
    day %= 7;
    printf("%d", day ? day : 7);
    return 0;
}
