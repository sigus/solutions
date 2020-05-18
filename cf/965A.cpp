#include <iostream>
using namespace std;

int main() {
    int k, n, s, p;
    cin >> k >> n >> s >> p;
    int sheets_per_one = (n + s - 1)/s;
    int sheets = k*sheets_per_one;
    cout << (sheets + p - 1)/p;
}

