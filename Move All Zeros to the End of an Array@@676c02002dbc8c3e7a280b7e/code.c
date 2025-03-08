#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int iterator=0;
    int original=0;
    while(iterator<n){
        if(arr[iterator]!=0){
            arr[original]=arr[iterator];
            original++;
        }
        iterator++;
    }
    for(int i=original;i<n;i++){
        arr[i]=0;
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}