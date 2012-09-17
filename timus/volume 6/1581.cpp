#include <cstdio>

int main() {
    int n, b, c = 0, cur_number = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &b);
        if (b == cur_number) 
            c++;
        else {
            if (cur_number) 
                printf("%d %d ", c, cur_number);
            c = 1;
            cur_number = b;
        }
    }
    printf("%d %d", c, cur_number);
    return 0;
}
