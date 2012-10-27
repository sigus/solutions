#include <cmath>
#include <cstdio>

int divcnt(int n) {
    int res = 0;
    double sqrtn = sqrt(n);
    for (int i = 1; i <= sqrtn; i++)
        if (!(n%i))
            res += 2;
    int isqrtn = (int) sqrtn;
    if (isqrtn*isqrtn == n)
        if (!(n%isqrtn))
            res--;
    return res;
}

int main() {
    for (int i = 1, s = 1; ; i++, s += i)
        if (divcnt(s) > 500) {
            printf("%d\n", s);
            return 0;
        }
}

