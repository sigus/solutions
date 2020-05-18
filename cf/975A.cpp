#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        string::iterator it = unique(s.begin(), s.end());
        string ss(s.begin(), it);
        m[ss] = 1;
    }
    cout << m.size();
}

