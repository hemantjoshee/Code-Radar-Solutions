#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        int a=1;
        for(int j=0;j<2*i+1;j++){
            if(j<i){
                printf("%d",a);
                a++;
            }else if(j==i){
                printf("%d",a);
            }else{
                printf("%d",a);
                a--;
            }

            }
            printf("\n");
        }
    return 0;
    }
