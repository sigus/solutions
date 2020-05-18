#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);
    int prev = 0, nislands = 0;
    for (int i = 0; i < n; i++) {
        int s;
        scanf(" %d", &s);
        if (s != prev)
            nislands++;
        prev = s;
    }
    printf("%d", nislands);
    return 0;
}

