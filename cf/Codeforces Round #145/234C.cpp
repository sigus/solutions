#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n;
    cin >> n;
    vector<int> t(n), pos(n, 0), neg(n, 0);
    for (int i = 0; i < n; i++)
        cin >> t[i];
    
    if (t[0] >= 0)
        pos[0] = 1;
    for (int i = 1; i < n - 1; i++)
        pos[i] = pos[i - 1] + (t[i] >= 0 ? 1 : 0);
    for (int i = n - 2; i >= 0; i--)
        neg[i] = neg[i + 1] + (t[i + 1] <= 0 ? 1 : 0);
    int m = pos[0] + neg[0];
    for (int i = 1; i < n - 1; i++)
        m = min(m, pos[i] + neg[i]);
    
    cout << m;
    return 0;
}

