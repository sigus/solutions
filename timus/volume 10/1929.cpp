#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);
    vector<bool> is_teddyhater(n + 1, false);
    for (int i = 0; i < m; i++) {
        int a;
        scanf(" %d", &a);
        is_teddyhater[a] = true;
    }
    int ans = 0;
    for (int i = 2; i <= n; i++)
        for (int j = i + 1; j <= n; j++) {
            int c = m - is_teddyhater[1] - is_teddyhater[i] - is_teddyhater[j];
            if ((n - 3)/3 <= c && 
                    (is_teddyhater[1] || is_teddyhater[i] || is_teddyhater[j]))
                ans++;
        }
    printf("%d", ans);
    return 0;
}

