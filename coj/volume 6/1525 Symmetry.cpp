#include <cstdio>
#include <algorithm>
using namespace std;

int f(int n) {
    if (n%2)
        return 1 + f((n - 1)/2);
    else
        return 0;
}

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);
    int p = min(f(n), f(m));
    int cp = 1, ans = 0;
    while (p--) {
        ans += cp;
        cp *= 4;
    }
    printf("%d", ans);
    return 0;
}
