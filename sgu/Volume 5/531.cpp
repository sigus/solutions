#include <cstdio>
#include <algorithm>
using namespace std;

int x[2*100000], w[2*100000], mn[2*100000];

int main() {
    int n, d;
    scanf(" %d %d", &n, &d);
    for (int i = 0; i < n; i++)
        scanf(" %d %d", &x[i], &w[i]);

    int m = 0, mi = -1, mj = -1;
    for (int i = 1; i < n; i++)
        mn[i] = w[i] > w[mn[i - 1]] ? i : mn[i - 1];
    for (int i = 0; i < n; i++) {
        int *e = upper_bound(x, x + i, x[i] - d);
        if (e == x)
            continue;
        e--;
        int j = e - x;
        int lm = w[i] + w[mn[j]];
        if (lm > m) {
            m = lm;
            mi = i + 1;
            mj = mn[j] + 1;
        }
    }

    printf("%d %d", mi, mj);
    return 0;
}
