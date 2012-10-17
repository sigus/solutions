#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int m, nfavored;
    cin >> m >> nfavored;
    int nunfavored = m - nfavored;
    vector<bool> a(m, false);
    for (int i = 0, id; i < nfavored; i++) {
        cin >> id;
        a[id] = true;
    }
    int n;
    cin >> n;
    char buf[20];
    cin.getline(buf, 20);
    vector<int> mn(n), mx(n);
    for (int i = 0; i < n; i++) {
        cin.getline(buf, 20);
        int d;
        cin >> d;        
        int fremained = nfavored, 
            uremained = nunfavored, 
            nknown = 0;
        for (int j = 0; j < d; j++) {
            int b;
            cin >> b;
            if (b) {
                nknown++;
                a[b] ? fremained-- : uremained--;
            }
        }
        mn[i] = nfavored - fremained + 
            max(d - nknown - uremained, 0);
        mx[i] = nfavored - fremained + 
            min(d - nknown, fremained); 
        cin.getline(buf, 20);
    }
    for (int i = 0; i < n; i++) {
        bool def_favored = true, def_unfavored = false;
        for (int j = 0; j < n; j++) {
            if (j == i)
                continue;
            if (mn[i] < mx[j])
                def_favored = false;
            if (mx[i] < mn[j])
                def_unfavored = true;
        }
        if (def_favored)
            cout << 0 << endl;
        else if (def_unfavored)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}

