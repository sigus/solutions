#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    vector< pair<int, int> > b;
    int c = 1;
    for (int i = 1; i < a.size(); i++, c++)
        if (a[i] != a[i - 1]) {
            b.push_back(make_pair(a[i - 1], c));
            c = 0;
        }
    b.push_back(make_pair(a.back(), c));
    int ncoins = 0, ncast = 0;
    int q = 0;
    while (q < b.size()) {
        int nc = 0, power = 0, oldq = q;
        while (q < b.size()) {
            nc += b[q].second;
            power = b[q].first;
            if (nc*power > p) {
                nc -= b[q].second;
                break;
            }
            q++;
        }
        if (q == oldq)
            break;
        ncoins += nc;
        ncast++;
    }
    cout << ncoins << ' ' << ncast;
    return 0;
}

