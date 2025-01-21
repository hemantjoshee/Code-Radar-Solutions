#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++0){
        int a=1;
        for(int j=0;j<i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}