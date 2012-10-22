#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 0, b[256] = {};
    for (int i = 0; i < s.length(); i++) {
        if (!b[s[i]])
            c++;
        b[s[i]]++;
    }
    if (c%2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}

