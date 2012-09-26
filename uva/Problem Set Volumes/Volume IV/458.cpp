#include <cstdio>

int main() {
    int ch;
    while ((ch = getchar()) != EOF)
        putchar(ch == '\n' ? ch : ch - 7);
    return 0;
}
