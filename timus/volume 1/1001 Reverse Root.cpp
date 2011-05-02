#include <cstdio>
#include <cmath>

long double d[250000];

int main() {
    int p = 0;
    long double ld = 0.0;
    while (scanf(" %lf", &ld) != EOF) 
        d[p++] = sqrt(ld);
    for (int i = p - 1; i >= 0; i--) 
        printf("%.4lf\n", d[i]);
    return 0;
}
