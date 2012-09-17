#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n, a[101] = {}, sum = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) 
        scanf(" %d", &a[i]);

    sort(a, a + n);
    for(int i = 0; i <= n/2; i++) {
        sum += a[i]/2 + 1;
    }

    printf("%d", sum);
    return 0;
}
