#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int e = 0;
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        if (5 - y >= k)
            e++;
    }
    cout << e/3;
}

