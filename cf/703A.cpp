#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int b = 0;
    for (int i = 0; i < n; i++) {
        int m, c;
        cin >> m >> c;
        if (m > c)
            b++;
        if (m < c)
            b--;
    }
    if (b > 0)
        cout << "Mishka";
    else if (b < 0)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
}

