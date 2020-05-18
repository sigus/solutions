#include <iostream>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

void precalc(map<long long int, bool>& m, int n) {
    vector<int> v;
    for (int i = 2; i <= n; i++) {
        bool is_prime = true;
        double r = sqrt(i);
        for (int j = 0; j < v.size() && v[j] <= r; j++)
            if (!(i%v[j])) {
                is_prime = false;
                break;
            }
        if (is_prime) {
            v.push_back(i);
            m[(long long int)i*i] = true;
        }
    }
}

int main() {
    map<long long int, bool> m;
    precalc(m, 1000000);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long int x;
        cin >> x;
        cout << (m[x] ? "YES" : "NO") << endl;
    }
}

