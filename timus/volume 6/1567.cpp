#include <cstdio>
#include <cstring>

int get_cost(char ch) {
    if (ch >= 'a' && ch <= 'z') 
        return (ch - 'a')%3 + 1;
    if (ch == ',') 
        return 2;
    if (ch == '!') 
        return 3;
    return 1;
}

int main() {
    char str[1010];
    int s = 0;
    gets(str);
    
    for (int i = 0; i < strlen(str); i++) 
        s += get_cost(str[i]);
    
    printf("%d", s);
    return 0;
}
