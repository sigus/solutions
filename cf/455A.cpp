#include <iostream>
using namespace std;

long long int max(long long int a, long long int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    cin >> n;
    long long int s[100001] = {};
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s[a] += a;
    }
    long long int m[100001][2] = {};
    m[1][0] = 0;
    m[1][1] = s[1];
    for (int  i = 2; i < 100001; i++) {
        m[i][0] = max(m[i - 1][0], m[i - 1][1]);
        m[i][1] = s[i] + m[i - 1][0];
    }
    cout << max(m[100000][0], m[100000][1]);
    return 0;
}

