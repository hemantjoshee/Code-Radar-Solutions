#include <stdio.h>
int main(){
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            printf("Not Sorted");
            return 0;
        };
    }
    printf("Sorted");
}