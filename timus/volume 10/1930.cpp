#include <algorithm>
#include <climits>
#include <cstdio>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int bfs(int start, int finish, bool flg, 
        const vector< vector< pair<int, bool> > >& v) {
    vector< pair<int, bool> > cost(v.size(), make_pair(INT_MAX, false));
    cost[start] = make_pair(0, flg);
    queue<int> q;
    q.push(start);
    while (q.size()) {
        for (int i = 0; i < v[q.front()].size(); i++) {
            if (cost[v[q.front()][i].first].first <= cost[q.front()].first +
                    (v[q.front()][i].second != cost[q.front()].second))
                continue;
            q.push(v[q.front()][i].first);
            cost[v[q.front()][i].first].first = cost[q.front()].first +
                (v[q.front()][i].second != cost[q.front()].second);
            cost[v[q.front()][i].first].second = v[q.front()][i].second;
        }
        q.pop();
    }
    return cost[finish].first;
}

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);
    vector< vector< pair<int, bool> > > v(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf(" %d %d", &a, &b);
        v[a].push_back(make_pair(b, true));
        v[b].push_back(make_pair(a, false));
    }
    int start, finish;
    scanf(" %d %d", &start, &finish); 
    printf("%d", min(bfs(start, finish, false, v), 
        bfs(start, finish, true, v)));
    return 0;
}

