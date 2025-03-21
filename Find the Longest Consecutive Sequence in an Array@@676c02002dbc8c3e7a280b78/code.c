#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int consequetive=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            consequetive++;
        }
    }
    printf("%d",consequetive);
}