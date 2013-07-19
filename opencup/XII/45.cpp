#include <iostream>
using namespace std;

int main () {
    long long n, p, u, v;
    cin >> n >> p >> u;
    for (int i = 0; i < n; i++)
        cin >> v;
    cout << (n > 1 ? 0 : u*v%p);
}

