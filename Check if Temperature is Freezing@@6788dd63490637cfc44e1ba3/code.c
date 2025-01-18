#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    a<=0?printf("Freezing"):printf("Above Freezing");
    return 0;
}