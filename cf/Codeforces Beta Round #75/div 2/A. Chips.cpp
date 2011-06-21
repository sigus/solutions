#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i = (i + 1)%n)
        m -= i + 1;

    cout << m;
    return 0;
}
