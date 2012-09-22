#include <cstdio>

int main() {
    int a, b, n;
    scanf(" %d %d %d", &a, &b, &n);

    int f = 1, m1[100] = {}, m2[100] = {};
    for (int i = 0, c = b; i < n && f; i++) {
        int k;
        scanf(" %d", &k);
        k < c ? (b += k - c, m2[i] = c - k) : (a += c - k, m1[i] = k - c);
        f = a >= 0 && b >= 0;
        c = k;
    }

    if (f) 
        for (int i = 0; i < n; i++) 
            printf("%d %d\n", m1[i], m2[i]); 
    else 
        puts("ERROR");
    return 0;
}
