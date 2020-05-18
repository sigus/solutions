#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (m > n) {
        cout << -1;
        return 0;
    }
    int nsteps = n/2 + n%2;
    while (nsteps%m)
        nsteps++;
    cout << nsteps;
}

