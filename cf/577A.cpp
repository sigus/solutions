#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int c = 0;
    for (int i = 1; i <= n; i++)
        if (!(x%i) && x/i <= n)
            c++;
    cout << c;
}

