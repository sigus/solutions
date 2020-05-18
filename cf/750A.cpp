#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    k = 240 - k;
    int i = 0;
    while ((i + 1)*5 <= k && i < n)
        k -= 5*++i;
    cout << i;
}

