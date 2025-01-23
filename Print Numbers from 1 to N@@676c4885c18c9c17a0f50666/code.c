#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        a++;
    }
    return 0;
}