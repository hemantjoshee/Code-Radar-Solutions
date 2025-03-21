#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int start=0;
    int end=n-1;
    while(start<end){
        if(a[start]!=a[end]){
            printf("NO");
            return 0;
        }
        start++;
        end--;
    }
    printf("YES");

}