#include <stdio.h> 

int main() {
    int c_1, c_2, c_3, c_4, c_5;
    scanf(" %d %d %d %d %d", &c_1, &c_2, &c_3, &c_4, &c_5);
    int s = c_1 + c_2 + c_3 + c_4 + c_5;
    if (!s || s%5)
        puts("-1");
    else
        printf("%d", s/5);
}

