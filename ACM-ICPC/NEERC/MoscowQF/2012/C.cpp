#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> l[i];
        sum += l[i];
    }
    double ave = (sum + 0.0)/n;
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (l[i] > ave)
            ans++;
    cout << ans;
    return 0;
}

