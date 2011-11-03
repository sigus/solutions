#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n%3 == 1)
        n--;
    if (n%3 == 2)
        n++;
    n /= 3;
    cout << n/12 << ' ' << n%12;
    return 0;
}
