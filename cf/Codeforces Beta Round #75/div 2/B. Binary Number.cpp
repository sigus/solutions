#include <cstdio>
#include <cstring>

int main() {
    char x[1000001];
    gets(x);
    int l = strlen(x);
    for (int i = 0; i < l; i++)
        x[i] -= '0';

    int ans = 0;
    for (int i = l - 1; i > 0; i--) {
        bool c = false;
        for (; i >= 0 && x[i]; i--) {
            ans++;
            c = true;
        }
        if (i >= 0) {
            x[i] = 1;
            if (c)
                i++;
        }
        ans++;
    }

    printf("%d", ans);
    return 0;
}
