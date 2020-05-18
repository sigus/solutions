#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int d_1, d_2, d_3;
    cin >> d_1 >> d_2 >> d_3;
    if (d_1 + d_3 <= d_2 || d_2 + d_3 <= d_1)
        cout << 2*min(d_1 + d_3, d_2 + d_3);
    else
        cout << min(2*(d_1 + d_2), d_1 + d_2 + d_3);
}

