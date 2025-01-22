#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a=65;
        for(int j=0;j<n-i-1;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}