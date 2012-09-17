#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    vector<double> v;
    double d = 0.0;
    while (scanf(" %lf", &d) != EOF) 
        v.push_back(sqrt(d));
    for (int i = v.size() - 1; i >= 0; i--) 
        printf("%lf\n", v[i]);
    return 0;
}
