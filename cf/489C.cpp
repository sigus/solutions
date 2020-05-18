#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;
    if ((!s && m > 1) || s > m*9) {
        cout << "-1 -1";
        return 0;
    }
    int r = m, c = s;
    string mn = "";
    char ch[2];
    bool f = false;
    while (r) {
        int d = min(c, 9);
        if (r > 1 && 1 <= c && c <= 9) {
            d--;
            f = true;
        }
        sprintf(ch, "%d", d);
        mn = string(ch) + mn;
        c -= min(c, 9);
        r--;
    }
    if (f)
        mn[0] = '1';
    cout << mn << ' ';
    r = m, c = s;
    while (r) {
        cout << min(c, 9);
        c -= min(c, 9);
        r--;
    }
}

