#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dfs(int y, int x, char s, char t,
        vector<string>& a, vector< vector<bool> >& vis) {
    if (vis[y][x] || a[y][x] != s)
        return 0;
    vis[y][x] = true;
    a[y][x] = t;
    return dfs(y - 1, x, s, t, a, vis) + dfs(y + 1, x, s, t, a, vis) +
        dfs(y, x - 1, s, t, a, vis) + dfs(y, x + 1, s, t, a, vis) + 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n + 2, string(m + 2, 'x'));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) 
            cin >> a[i][j];
        string buf;
        getline(cin, buf);
    }
    char k = a[n][1], h = a[1][m];
    int l;
    cin >> l;
    for (int i = 0; i < l; i++) {
        int tn;
        cin >> tn;
        char t = '0' + tn;
        vector< vector<bool> > vis(n + 2, vector<bool>(m + 2, false));
        if (i%2) {
            dfs(1, m, h, t, a, vis);
            h = t;
        } else {
            dfs(n, 1, k, t, a, vis);
            k = t;
        }
    }
    vector< vector<bool> > vis(n + 2, vector<bool>(m + 2, false));
    cout << dfs(n, 1, k, k, a, vis) << endl << dfs(1, m, h, h, a, vis);
    return 0;
}

