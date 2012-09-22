#include <cstdio>

int main() {
    int n;
    scanf(" %d", &n);
    char strs[1010][3];
    gets(strs[0]);
    for (int i = 0; i < n; i++) 
        gets(strs[i]);
    char ch = getchar();
    for (int i = 0; i < n; i++) 
        if (strs[i][0] == ch) 
            puts(strs[i]);
    return 0;
}
