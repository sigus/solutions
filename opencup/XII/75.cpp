#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    cout << (1 + n)*n/2 << endl;
    for (int i = 1; i <= n; i++)
        for (int j = n; j >= n - i + 1; j--)
            cout << i << ' ' << n + j << endl; 
}

