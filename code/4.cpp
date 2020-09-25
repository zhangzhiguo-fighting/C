#include <iostream>
#include <math.h>

int main() {
    const double pi = acos(-1);
    double x;
    scanf("%lf", &x);
    printf("%lf\n", x * pi / 180);
    return 0;
}

