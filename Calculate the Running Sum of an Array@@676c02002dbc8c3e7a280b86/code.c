#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int sumo[n];
    for(int i=0;i<n;i++){
        sum+=arr[i];
        sumo[i]=sum;
    }
    for(int i=0;i<n;i++){
        printf("%d ",&sumo[i]);
    }

}