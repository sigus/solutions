#include <cstdio>

int main() {
    int s = 0, cur;
    int pprev = 1, prev = 1;
    int k;
    scanf(" %d", &k);

    if (!k) 
        putchar('0');
    else if (k == 1) 
        putchar('1');
    else if (k == 2) 
        putchar('2');
    else {
        for (int i = 3; i <= k; i++) {
            cur = pprev + prev;
            pprev = prev;
            prev = cur;
            s += cur;
        }
        printf("%d", s + 2);
   }
   return 0;
}
