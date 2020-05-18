#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int o = 0, t = 0;
    for (size_t i = 0; i < s.size(); i++)
        if (s[i] == 'o')
            o++;
        else if (s[i] == '-')
            t++;
    cout << (o ? (t%o ? "NO" : "YES") : "YES");
}

