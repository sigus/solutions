#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector< map<int, int> > v(6);
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a][b] = 1;
        v[b][a] = 1;
    }
    for (int i = 1; i <= 5; i++)
        for (int j = i + 1; j <= 5; j++)
            for (int k = j + 1; k <= 5; k++)
                if (v[i][j] && v[i][k] && v[j][k] ||
                    !v[i][j] && !v[i][k] && !v[j][k]) {
                        cout << "WIN";
                        return 0;
                }
    cout << "FAIL";
    return 0;
}
