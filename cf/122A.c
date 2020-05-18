#include <stdio.h>
#include <string.h>

int islucky(int a) {
    char s[5];
    sprintf(s, "%d", a);
    int l = strlen(s);
    for (int i = 0; i < l; i++)
        if (s[i] != '4' && s[i] != '7')
            return 0;
    return 1;
}

int main() {
    int n;
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++)
        if (!(n%i) && islucky(i)) {
            puts("YES");
            return 0;
        }
    puts("NO");
    return 0;
}

