#include <cstdio>
#include <algorithm>
using namespace std;

int main() {               
    int n;
    scanf(" %d", &n);
    printf("%d", n/3*2 + max(0, (n%3 - 1)));
    return 0;
}
