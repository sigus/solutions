#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int dfs(int y, int x, const vector<string>& a, vector< vector<bool> >& vis) {
    if (a[y][x] != '1' || vis[y][x])
        return 0;
    vis[y][x] = true;
    return dfs(y - 1, x, a, vis) + dfs(y + 1, x, a, vis) +
        dfs(y, x - 1, a, vis) + dfs(y, x + 1, a, vis) + 1;
}

int main() {
    int n, m;
    scanf(" %d %d ", &n, &m);
    vector<string> a(n + 2, string(m + 2, 'x'));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            a[i][j] = getchar();
        getchar();
    }
    int cnt = 0, ms = 0;
    vector< vector<bool> > vis(n + 2, vector<bool>(m + 2, false));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] == '1' && !vis[i][j])
                cnt++, ms = max(ms, dfs(i, j, a, vis));
    printf("%d %d", cnt, ms);
    return 0;
}

