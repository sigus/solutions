#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        m[str]++;
        if(m[str] == 2) 
            cout << str << endl;
    }
    return 0;
}
