#include <cstdio>

int main(){
    int k, n, num, f[10] = {}, r = 0;
    scanf(" %d %d", &k, &n);

    for (int i = 0; i < n; i++) {
        scanf(" %d", &num);     
        f[num/1000]++;
    }
    for (int i = 0; i < 10; i++) 
        r += f[i]%k ? f[i]/k + 1 : f[i]/k;

    printf("%d", r + 2);
    return 0;
}
