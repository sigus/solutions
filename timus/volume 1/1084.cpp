#include <cstdio>
#include <cmath>

#define PI 3.1415926

int main() {
    double h, r;
    scanf(" %lf %lf", &h, &r);
    h /= 2;
    double s;
    if (r <= h)
        s = PI*r*r;
    else if (r >= h*sqrt(2.0))
        s = 4*h*h;
    else {
        double alpha = acos(h/r);
        s = 4*h*r*sin(alpha) + r*r*(PI - 4*alpha);
    }
    printf("%f", s);
    return 0;
}

