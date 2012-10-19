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
    char s[100010];
    int stars[100010] = {};
    int n;
    scanf(" %d ", &n);
    gets(s);
    /*for (int i = 1; i <= n; i++) {
        stars[i] = stars[i - 1];
        if (s[i - 1] == '*')
            stars[i]++;
    }*/
     
    int l, r, maxp = -1;
    /*for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n - i + 1; j++) {
            int nstars = stars[j + i - 1] - stars[j - 1];
            int ndots = i - nstars;
            int p = nstars - (ndots + 2);
            if (p > maxp) {
                maxp = p;
                l = j;
                r = j + i - 1;
            }
        }*/
    for (int i = 1, nstars = 0, ndots = 0, beg = 1; i <= n; i++) {
        s[i - 1] == '*' ? nstars++ : ndots++;
        //printf("%d %d\n", nstars, ndots);
        int p = nstars - ndots;
        if (p < 0) {
            nstars = ndots = 0;
            beg = i + 1;
            continue;
        }
        if (p > maxp && nstars - (ndots + 2) >= 0) {
            maxp = p;
            l = beg;
            r = i;
        }
    }
        
    vector<string> ans;
    ans.reserve(10000);
    if (maxp != -1) {
        char t[10];
        sprintf(t, "%d", l);
        ans.push_back(t);
        sprintf(t, "%d", r);
        ans.push_back(string("Shift+") + t);
    }
    /*for (int i = 0; i < n; i++)
        if (((i < l - 1 || i > r - 1) && s[i] == '*') ||
            ((i >= l - 1 && i <= r - 1) && s[i] == '.')) {
            char t[10];
            sprintf(t, "%d", i + 1);
            ans.push_back(string("Ctrl+") + t); 
        }*/
    for (int i = 0; i < l - 1; i++) {
        if (s[i] == '*') {
            char t[10];
            sprintf(t, "%d", i + 1);
            ans.push_back(string("Ctrl+") + t); 
        }
    }
    for (int i = l - 1; i <= r - 1; i++) {
        if (s[i] == '.') {
            char t[10];
            sprintf(t, "%d", i + 1);
            ans.push_back(string("Ctrl+") + t); 
        }
    }
    for (int i = r; i < n; i++) {
        if (s[i] == '*') {
            char t[10];
            sprintf(t, "%d", i + 1);
            ans.push_back(string("Ctrl+") + t); 
        }
    }
    
    printf("%d\n", ans.size());
    for (int i = 0; i < ans.size(); i++)
        puts(ans[i].c_str());
    return 0;
}

