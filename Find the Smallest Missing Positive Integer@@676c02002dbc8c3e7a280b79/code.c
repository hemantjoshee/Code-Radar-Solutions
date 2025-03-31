#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int hash[1000]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i>0){
        hash[arr[i]]++;
        }    
    }
    for(int i=1;i<n;i++){
        if(hash[i]==0){
            printf("%d",i);
            break;
        }
    }
} 