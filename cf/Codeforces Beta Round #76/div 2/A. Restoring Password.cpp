#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<string, int> m;
    for (int i = 0; i < 10; i++) {
        string b;
        cin >> b;
        m[b] = i;
    }
    for (int i = 0; i < 8; i++)
        cout << m[s.substr(10*i, 10)];
    return 0;
}
