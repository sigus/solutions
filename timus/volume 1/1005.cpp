#include <cstdio>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int n, a[20], m, c1, c2;

void f(int d, int c) {
    if (c)
        c2 += a[d];
    else
        c1 += a[d];
    if (d < n) {
        f(d + 1, 0);
        f(d + 1, 1);
    } else
        m = min(m, abs(c1 - c2));
    if (c)
        c2 -= a[d];
    else
        c1 -= a[d];
}

int main() {
    m = INT_MAX;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    f(0, 0);
    f(0, 1);

    printf("%d", m);
    return 0;
}
