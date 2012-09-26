#include <cstdio>
#include <cctype>

int main() {
    int ch, count = 0, flg = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            printf("%d\n", count); 
            count = 0;
        }
        if (isalpha(ch)) 
            flg = 1;
        else if(flg) {
            count++;
            flg = 0;
        }
    }
    return 0;
}
