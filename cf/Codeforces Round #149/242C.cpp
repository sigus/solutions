#include <iostream>
#include <map>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void push(queue< pair<int, int> >& q, int x, int y, int d,
        map< int, vector< pair<int, int> > >& v,
        map< int, map<int, int> >& dist) {
    if (dist[x][y])
        return;
    vector< pair<int, int> >& vv = v[x];
    bool flg = false;
    for (int i = 0; i < vv.size(); i++)
        flg |= vv[i].first <= y && y <= vv[i].second;
    if (!flg)
        return;
    dist[x][y] = d;
    q.push(make_pair(x, y));
}

int main () {
    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;
    int n;
    cin >> n;
    map< int, vector< pair<int, int> > > v;
    for (int i = 0; i < n; i++) {
        int r, a, b;
        cin >> r >> a >> b;
        v[r].push_back(make_pair(a, b));
    }
    map< int, map<int, int> > dist;
    dist[x0][y0] = dist[x1][y1] = 0;
    queue< pair<int, int> > q;
    q.push(make_pair(x0, y0));
    while (q.size()) {
        pair<int, int> c = q.front();
        q.pop();
        int d = dist[c.first][c.second];
        for (int i = -1; i <= 1; i++)
            for (int j = -1; j <= 1; j++)
                if (i || j)
                    push(q, c.first + i, c.second + j, 
                         dist[c.first][c.second] + 1, v, dist);
    }
    cout << (dist[x1][y1] ? dist[x1][y1] : -1);
}

