#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        int a=1;
        for(int j=0;j<=i;j++){
            printf("%d",a);
            a++;
        }
    }
    return 0;
}