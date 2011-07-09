#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    string s;
    cin >> s;
    char letter;
    cin >> letter;
    
    string s1 = s;
    for (int i = 0; i < s1.length(); i++)
        s1[i] = tolower(s1[i]);
    vector<string> v1(v);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < v1[i].length(); j++)
            v1[i][j] = tolower(v1[i][j]);

    for (int i = 0; i < n; i++) {
        int pos = 0;
        while ((pos = s1.find(v1[i], pos)) != string::npos) {
            for (int j = pos; j < pos + v1[i].length(); j++) {
                char c = letter;
                if (s1[j] == letter)
                    c = letter == 'a' ? 'b' : 'a';
                if (isupper(s[j]))
                    c = toupper(c);
                s[j] = c;
            }    
            pos++;
        }
    }

    cout << s;
    return 0;
}
