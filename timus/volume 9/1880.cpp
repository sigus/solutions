#include <cstdio>
#include <map>
using namespace std;

int main() {
    map<int, int> m;
    for (int i = 0; i < 3; i++) {
        int n;
        scanf(" %d", &n);
        for (int j = 0; j < n; j++) {
            int a;
            scanf(" %d", &a);
            m[a]++;
        }
    }
    int ans = 0;
    for (map<int, int>::iterator i = m.begin(); i != m.end(); i++)
        if (i->second > 2)
            ans++;
    printf("%d", ans);
    return 0;
}

