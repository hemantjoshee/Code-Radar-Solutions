#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%d",&a);
    switch (a){
        case 'a':printf("Excellent");
        break;
        case 'b':printf("Good");
        break;
        case 'C':printf("Average");
        break;
        case 'D':printf("Below Average");
        break;
        case 'E':printf("Fail");
        break;
        default:printf("Invalid grade");
    }
    return 0;
}