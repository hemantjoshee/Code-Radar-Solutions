#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start=1;
        }else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            printf("%d",start);
            start=1-start;
        }
        printf("\n");
    }
    return 0;
}