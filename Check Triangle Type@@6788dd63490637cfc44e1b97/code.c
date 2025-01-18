#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("Equlateral");
    }else if(a!=b && b!=c &&  a!=c){
        printf("Scalene");
    }else{
        printf("Isosceles");
    }
    return 0;
}