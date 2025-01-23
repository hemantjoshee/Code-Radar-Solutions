#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        a+=i;
    }
    printf("%d",a);
    return 0;
}