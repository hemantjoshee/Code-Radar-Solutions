#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",a,b);
    int c=b-a;
    if(c>0){
        printf("Profit");
    }else if(c<0){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }

    return 0;
}