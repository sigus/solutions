#include <algorithm>
#include <functional>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> m(n), c(n);
    vector<int> noccur(4001, 0);
    vector< vector<int> > costs(4001);
    for (int i = 0; i < n; i++) {
        cin >> m[i] >> c[i]; 
        noccur[m[i]]++;
        costs[m[i]].push_back(c[i]);
    }
    
    vector< pair<pair<int, int>, int> > v;
    for (int i = 1; i < 4001; i++)
        if (noccur[i]) 
            v.push_back(make_pair(make_pair(noccur[i], 0), i)); 
    if (v.size() < k) {
        cout << "0 0";
        return 0;
    }
    sort(v.begin(), v.end(), greater< pair<pair<int, int>, int> >());
    int kk;
    cout << (kk = v[k - 1].first.first) << ' ';
    
    vector<int> total_costs(4001, 0);
    for (int i = 1; i < 4001; i++) {
        if (noccur[i] < kk)
            continue;
        sort(costs[i].begin(), costs[i].end(), greater<int>());
        for (int j = 0; j < kk; j++)
            total_costs[i] += costs[i][j];
    }
    for (int i = 0; i < v.size(); i++) {
        v[i].first.second = total_costs[v[i].second];
        if (v[i].first.first > kk)
            v[i].first.first = kk;
    }
    sort(v.begin(), v.end(), greater< pair<pair<int, int>, int> >());
    int total = 0;
    for (int i = 0; i < k; i++)
        total += v[i].first.second;
    cout << total;
    return 0;
}

