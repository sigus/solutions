#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int nzeros = 0, nones = 0;
    for (size_t i = 0; i < s.size(); i++)
        if (s[i] == '0')
            nzeros++;
        else
            nones++;

    if (nones)
        cout << 1;
    for (int i = 0; i < nzeros; i++)
        cout << 0;
}

