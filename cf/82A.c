#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);
    char *name[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int ans = 0, nn = 0, s = 1;
    for (int i = 2; i <= n; i++) {
        nn++;
        if (nn == s) {
            ans++; 
            nn = 0;
        }
        if (ans == 5) {
            ans = 0;
            s *= 2;
        }
    }
    puts(name[ans]);
    return 0;
}

