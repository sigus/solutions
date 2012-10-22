#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

#define N 1073741824

vector<int> d(1000000, 0);

int calc_d(int n) {
    if (d[n])
        return d[n];
    int res = 0;
    double sqrtn = sqrt(n + 0.0);
    for (int i = 1; i <= sqrtn; i++)
        if (!(n%i))
            res += 2;
    int isqrtn = (int) sqrtn;
    if (isqrtn*isqrtn == n)
        if (!(n%isqrtn))
            res--;
    return d[n] = res;
}

int main() {
    int ans = 0;
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++)
        for (int j = 1; j <= b; j++)
            for (int k = 1; k <= c; k++) 
                ans = (ans + calc_d(i*j*k)%N)%N;
    cout << ans;
    return 0;
}

