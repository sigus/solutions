#include <algorithm>
#include <fstream>
#include <functional>
#include <vector>
#include <string>
#include <utility>
using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n;
    cin >> n;
    int x, a, b, c;
    cin >> x >> a >> b >> c;
    vector< pair<int, string> > v;
    for (int i = 0; i < n; i++) {
        string name;
        int rating;
        cin >> name >> rating;
        v.push_back(make_pair(rating, name));
    }
    sort(v.begin(), v.end(), greater< pair<int, string> >());
    vector< vector< pair<int, string> > > basket(4);
    for (int i = 0; i < n; i++)
        basket[i/(n/4)].push_back(v[i]);
    for (int i = 0; i < n/4; i++) {
        vector<string> team;
        for (int j = 0; j < 4; j++) {
            x = (x*a + b)%c;
            int ind = x%basket[j].size();
            team.push_back(basket[j][ind].second);
            basket[j].erase(basket[j].begin() + ind);
        }
        cout << "Group " << (char) ('A' + i) << ":" << endl;
        for (int j = 0; j < 4; j++)
            cout << team[j] << endl;
    }
    return 0;
}

