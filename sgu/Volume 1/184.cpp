#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int p, m, c, k, r, v;
    scanf(" %d %d %d %d %d %d", &p, &m, &c, &k, &r, &v);
    printf("%d", min(p/k, min(m/r, c/v)));
    return 0;
}
