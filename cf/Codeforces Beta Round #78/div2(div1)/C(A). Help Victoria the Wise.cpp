#include <map>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string rotate(string s, int off, int *a) {
    string new_s(s);
    for (int i = 0; i < 4; i++) 
        new_s[a[(i + off)%4] - 1] = s[a[i] - 1];
    return new_s;
}

string rotate1(string s, int off) {
    int a[] = { 1, 3, 5, 6 };
    return rotate(s, off, a);
}

string rotate2(string s, int off) {
    int a[] = { 2, 6, 4, 3 };
    return rotate(s, off, a);
}

int main() {
    string s;    
    cin >> s;

    sort(s.begin(), s.end());
    map<string, int> m;
    int ans = 0;
    do {
        bool flg = true;
        map<string, int> mm;
        for (int i = 0; i < 4; i++) {
            string b = rotate1(s, i);
            for (int j = 0; j < 4; j++) {
                string bb = rotate2(b, j);
                if (mm.find(bb) == mm.end())
                    if (m.find(bb) != m.end())
                        flg = false;
                mm[bb] = m[bb] = 1;
            }
        }
        if (flg)
            ans++;
    } while (next_permutation(s.begin(), s.end()));

    cout << ans;
    return 0;
}
