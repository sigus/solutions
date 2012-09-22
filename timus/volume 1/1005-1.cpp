#include <cstdio>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int n, a[20], m, b[20], stop;

void add1() {
    int i = 0, check = b[n - 1];
    if (++b[0] > 1) {
        while (b[i]) 
            b[i++] = 0;
        b[i] = 1;
    }
    stop = check && !b[n - 1];
}

void calc() {
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if (b[i])
            c2 += a[i];
        else
            c1 += a[i];
    }
    m = min(m, abs(c1 - c2));
}

int main() {
    m = INT_MAX;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) 
        scanf(" %d", &a[i]);
    while (1) {
        add1();
        if (stop) 
            break;
        calc();
    }
    printf("%d" , m);
    return 0;
}
