#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int i, j;
    while (scanf(" %d %d", &i, &j) != EOF) {
        int m = 0;
        int oi = i, oj = j;
        if (i > j) 
            swap(i, j);
        for (int k = i; k <= j; k++) {
            int cnt = 1;
            int n = k;
            while (n != 1) {
                if (n%2) 
                    n = 3*n + 1;
                else
                    n /= 2;
                cnt++;
            }
            m = max(m, cnt);
        }
        printf("%d %d %d\n", oi, oj, m);
    }
    return 0;
}
