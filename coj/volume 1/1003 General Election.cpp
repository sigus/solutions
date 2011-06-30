#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int t;
    scanf(" %d", &t);
    for (int i = 0; i < t; i++) {
        int n, m;
        scanf(" %d %d", &n, &m);
        vector<int> c(n);
        int cmax = 0, winner;
        for (int j = 0; j < m; j++)
            for (int k = 0; k < n; k++) {
                int v;
                scanf(" %d", &v);
                c[k] += v;
                if (c[k] > cmax) {
                    cmax = c[k];
                    winner = k + 1;
                }
            }
            printf("%d\n", winner);
    }
    return 0;
}
