#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf(" %d ", &n);
    char s[101];
    gets(s);
    
    for (int i = 0; i < n/2; i++) {
        int a = i, b = i + n/2;
        if (s[a] == 'R' && s[b] == 'L')
            swap(a, b);
        printf("%d %d\n", a + 1, b + 1);
    }
    return 0;
}

