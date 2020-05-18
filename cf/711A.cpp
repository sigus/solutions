#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool found = false;
    stringstream ss;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (!found && s[0] == 'O' && s[1] == 'O') {
            found = true;
            s[0] = s[1] = '+';
        } else if (!found && s[3] == 'O' && s[4] == 'O') {
            found = true;
            s[3] = s[4] = '+';
        }
        ss << s << endl;
    }
    if (found) {
        cout << "YES" << endl << ss.str();
    } else
        cout << "NO";
}

