#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    a>=60?printf("Eligible"):printf("Not Eligible");
    return 0;
}