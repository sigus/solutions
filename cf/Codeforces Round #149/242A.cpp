#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main () {
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    vector< pair<int, int> > v;
    for (int i = a; i <= x; i++)
        for (int j = b; j < i && j <= y; j++)
            v.push_back(make_pair(i, j));
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << ' ' << v[i].second << endl;
}

