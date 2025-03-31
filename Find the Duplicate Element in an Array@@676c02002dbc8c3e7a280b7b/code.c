#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int hash[1000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    for(int i=0;i<1000;i++){
        if (hash[i]>1){
            printf("%d",i);
        }
    }
}