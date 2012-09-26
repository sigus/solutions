#include <cstdio>

int main() {
    int n;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int f;
        scanf(" %d", &f);
        int sum = 0;
        for (int j = 0; j < f; j++) {
            int s, a, e;
            scanf(" %d %d %d", &s, &a, &e);
            sum += s*e;
        }
        printf("%d\n", sum);
    }
    return 0;
}
