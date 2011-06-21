#include <iostream>
#include <vector>
#include <string> 
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    vector< vector<int> > l(s1.length() + 1, vector<int>(256, s1.length()));
    for (int i = s1.length() - 1; i >= 0; i--)
        for (char j = 'a'; j <= 'z'; j++)
            if (s1[i] == j)
                l[i][j] = i;
            else if (i + 1 < s1.length())
                l[i][j] = l[i + 1][j];
                
    int ans = 1, pos = 0;
    for (int i = 0; i < s2.length(); i++) {
        pos = l[pos][s2[i]];
        if (pos == s1.length()) {
            ans++;
            pos = 0;
            pos = l[pos][s2[i]];
            if (pos == s1.length()) {
                cout << -1;
                return 0;
            }
        }
        pos++;
    }

    cout << ans;
    return 0;
}
