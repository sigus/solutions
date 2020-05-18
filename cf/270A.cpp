#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        bool found = false;
        for (int n = 2; (double)180*(n - 2)/n <= 179.5; n++)
            if (!(180*(n - 2)%n) && 180*(n - 2)/n == a) {
                cout << "YES" << endl;
                found = true;
            }
        if (!found)
            cout << "NO" << endl;
    }
}

