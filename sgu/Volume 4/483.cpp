#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    h++;

    vector<int> l; 
    for (int number = h*h + h, step = 1 + 2*h; number <= n; number += step, step += 2)
        l.push_back(number);

    vector<int> r; 
    for (int number = h*h, step = 2*h; number <= n; number += step, step += 2)
        r.push_back(number);

    for (int i = l.size() - 1; i >= 0; i--) 
        cout << l[i] << ' ';
    for (int i = 0; i < r.size(); i++)
        cout << r[i] << ' ';
    return 0;
}
