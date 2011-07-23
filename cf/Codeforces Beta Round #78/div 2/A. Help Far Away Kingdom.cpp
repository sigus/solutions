#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int pos = s.find(".");
    if (s[pos - 1] == '9')
        cout << "GOTO Vasilisa.";    
    else {
        if (s[pos + 1] >= '5')
            s[pos - 1]++;
        cout << s.substr(0, pos);
    }
    return 0;
}

