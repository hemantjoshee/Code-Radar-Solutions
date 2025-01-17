#include <stdio.h>
int main() {
    double radius;
    double pi=3.14;
    scanf("%lf",radius);
    double circle=pi*radius*radius;
    printf("Area: %.2f", circle);
    return 0;
}