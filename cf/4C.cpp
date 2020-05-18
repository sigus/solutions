#include <iostream>
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
        if (m[s])
            cout << s << m[s]++ << endl;
        else
            m[s]++, cout << "OK" << endl;
    }
}

