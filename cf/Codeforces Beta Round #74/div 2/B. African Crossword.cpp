#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }

    vector< vector<bool> > striked(n, vector<bool>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            for (int k = i + 1; k < n; k++)
                if (v[k][j] == v[i][j])
                    striked[k][j] = striked[i][j] = true;
            for (int k = j + 1; k < m; k++)
                if (v[i][k] == v[i][j])
                    striked[i][k] = striked[i][j] = true;
        }
    string ans;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!striked[i][j])
                ans += v[i][j];

    cout << ans;
    return 0;
}