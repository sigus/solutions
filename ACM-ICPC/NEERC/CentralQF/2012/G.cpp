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
    int y;
    scanf("%d", &y);
    if (!y) {
        putchar('0');
        return 0;
    }
    vector<int> v;
    while (y) {
        if (y%2)
            v.push_back(1);
        else
            v.push_back(0);
        y /= 2;
    }
    vector<int> xr(v.size());
    xr[xr.size() - 1] = 1;
    for (int i = xr.size() - 2; i >= 0; i--) {
        xr[i] = v[i] ? !xr[i + 1] : xr[i + 1];
    }
    int x = 0;
    for (int i = 0, p = 1; i < xr.size(); i++) {
        x += xr[i]*p;
        p *= 2;
    }
    
    /*for (int i = v.size() - 1; i >=0; i--)
        printf("%d ", v[i]);
    puts("");    
        
    for (int i = xr.size() - 1; i >=0; i--)
        printf("%d ", xr[i]);
    puts("");    */

        
    printf("%d", x);
    return 0;
}
