#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    char str[17];
    cin.getline(str, 17);
    string Mk;
    map<string, int> m;
    for (int i = 0, M = 0; i < n; i++) {
        cin.getline(str, 17);
        string k = str;
        m[k]++;
        if (m[k] > M) {
            M = m[k];
            Mk = k;
        }
    }
    cout << Mk;
    return 0;
}
