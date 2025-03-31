#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int hash[n];
    for(int i=0;i<max;i++){
        (hash[arr[i]])++
    }
    for(int i=0;i<n;i++){
        if (hash[i]>1){
            printf("%d",i);
        }
    }
}