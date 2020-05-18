#include <iostream>
#include <string>
using namespace std;

int main() {
    string k = "qwertyuiop"
               "asdfghjkl;"
               "zxcvbnm,./";
    char d;
    cin >> d;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        for (int j = 0; ; j++)
            if (s[i] == k[j]) {
                if (d == 'L')
                    cout << k[j + 1];
                else
                    cout << k[j - 1];
                break;
            }
}

