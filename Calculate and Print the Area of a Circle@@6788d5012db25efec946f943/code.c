#include <stdio.h>
int main() {
    double radius;
    const double pi=3.14;
    scanf("%lf",radius);
    double circle=pi*(radius)**2;
    printf("Area: %.2f", circle);
    return 0;
}