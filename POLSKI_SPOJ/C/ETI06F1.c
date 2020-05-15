#include <stdio.h>

int main() {
    double r;
    double d;
    scanf("%lf %lf", &r, &d);
    double result = ((r * r) - (d * d / 4)) * 3.141592654;
    printf("%lf", result);
    return 0;
}
