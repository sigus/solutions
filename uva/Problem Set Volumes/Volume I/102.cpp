#include <climits>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int c[3][3];
    while (scanf(" %d %d %d %d %d %d %d %d %d",
            &c[0][0], &c[0][1], &c[0][2], 
            &c[1][0], &c[1][1], &c[1][2], 
            &c[2][0], &c[2][1], &c[2][2]) != EOF) {
        int m = INT_MAX;
        char a[4];
        char p[4] = "BCG";
        do {
            int l = 0;
            for (int i = 0; i < 3; i++) {
                if (p[i] == 'B')
                    l += c[i][1] + c[i][2];
                if (p[i] == 'C')
                    l += c[i][0] + c[i][1];
                if (p[i] == 'G')
                    l += c[i][0] + c[i][2];
            }
            if (l < m) {
                m = l;
                strcpy(a, p);
            }
        } while (next_permutation(p, p + 3));
        printf("%s %d\n", a, m);
    }
    return 0;
}
