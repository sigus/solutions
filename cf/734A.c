#include <stdio.h>

int main() {
    int n;
    scanf(" %d ", &n);
    int a = 0, d = 0;
    for (int i = 0; i < n; i++) {
        char c;
        scanf("%c", &c);
        if (c == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        puts("Anton");
    else if (a < d)
        puts("Danik");
    else
        puts("Friendship");
    return 0;
}

