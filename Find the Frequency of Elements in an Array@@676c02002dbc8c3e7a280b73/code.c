#include <stdio.h>
#define Max 100
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int hash[Max];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    for(int i=0;i<Max;i++){
        if(hash[i]>0){
            printf("%d %d\n",i,hash[i]);
        }
    }

}