#include <stdio.h>
#include <string.h>

int main() {
    char s[102], hello[6] = "hello", p = 0;
    fgets(s, 102, stdin);
    size_t l = strlen(s) - 1;
    for (size_t i = 0; i < l; i++) {
        if (s[i] == hello[p])
            p++; 
        if (p == 5) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}

