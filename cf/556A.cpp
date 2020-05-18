#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int nzeros = 0, nones = 0, nr = n;
    for (int i = 0; i < n; i++)
        if (s[i] == '0')
            if (nones) {
                nones--;
                nr -= 2;
            } else
                nzeros++;
        else if (nzeros) {
            nzeros--;
            nr -= 2;
        } else
            nones++;
    cout << nr;
}

