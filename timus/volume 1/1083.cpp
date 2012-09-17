#include <cstdio>

int main(){
    int n, k = 0, r = 1;
    char ch;
    scanf(" %d ", &n);
    while (scanf("%c", &ch) != EOF) 
        k++;
    k--;
    for(int i = n; i > 0; i -=k) 
        r *= i;
    printf("%d", r);
    return 0;
}
