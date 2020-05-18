#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double s = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        s += (p + 0.0)/n;
    }
    cout << setprecision(8) << s;
}

