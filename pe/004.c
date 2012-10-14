#include <stdio.h>
#include <string.h>

int is_palindrome(int n) {
    char str[7];
    sprintf(str, "%d", n);
    for (int i = 0; i < strlen(str)/2; i++)
        if (str[i] != str[strlen(str) - i - 1])
            return 0;
    return 1;
}

int main() {
    int maxpal = 0;
    for (int i = 100; i < 1000; i++)
        for (int j = i; j < 1000; j++)
            if (is_palindrome(i*j) && i*j > maxpal)
                maxpal = i*j;
    printf("%d\n", maxpal);
    return 0;
}

