#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <utility>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    scanf(" %d %d", &n, &m);
    char buf[666];
    char a[1010][1010];
    for (int i = 0; i < 1010; i++) {
        for (int j = 0; j < 1010; j++)
            a[i][j] = '-';
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            a[i + 1][j + 1] = getchar();
        gets(buf);
    }
    /*for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++)
            putchar(a[i][j]);
        puts("");
    }*/
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            if (a[i][j] == '+' && (
                a[i - 1][j] == '-' || 
                a[i + 1][j] == '-' || 
                a[i][j + 1] == '-' ||
                a[i][j - 1] == '-'))
                ans++;
    }
    /*for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++)
            printf("%c", a[i][j]);
        puts("");
    }*/
    printf("%d", ans);
    return 0;
}
