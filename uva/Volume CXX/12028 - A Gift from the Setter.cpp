#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long get_diff_sum(long long k, long long c, long long n, long long a0) {
    long long ans = 0;
    vector<long long> a;
    a.push_back(a0);
    for (long long i = 1; i < n; i++)
        a.push_back((k*a[i - 1] + c)%1000007);
    sort(a.begin(), a.end());
    long long tmp = 0;
    for (long long i = 1; i < n; i++) {
        tmp += i*(a[i] - a[i - 1]);
        ans += tmp;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int k, c, n, a;
        cin >> k >> c >> n >> a;
        cout << "Case " << i + 1 << ": " << get_diff_sum(k, c, n, a) << endl;
    }
    return 0;
}
