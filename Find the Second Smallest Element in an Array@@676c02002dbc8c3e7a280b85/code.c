#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int smallest=INT_MAX;
    int ss=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>smallest){
            ss=smallest;
            smallest=arr[i];
        }
        if(arr[i]>ss && arr[i]<smallest){
            ss=arr[i];
        }
    }

    if (ss==INT_MAX){
        printf("-1");
        return 0;
    }
    printf("%d",ss);

}