#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    for (int i = 0; i < n; i++)
        s += (n - i)*(1 + i) - i;
    cout << s;
}

