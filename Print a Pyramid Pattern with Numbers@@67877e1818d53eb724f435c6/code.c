#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a=1;
        for(int j=0;j<n-i-1;){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",a);
        }
        printf("\n");
    }    
    return 0;
}