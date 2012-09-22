#include <cstdio>

int main() {
    char n[7];
    scanf("%s", n);

    char *ans;
    ans = "Yes";
    int a = n[0] + n[1] + n[2];
    int b = n[3] + n[4] + n[5];
    if (a < b && n[5] == '0' || a > b && n[5] == '9') 
        ans = "No";

    printf("%s", ans);
    return 0;
}
