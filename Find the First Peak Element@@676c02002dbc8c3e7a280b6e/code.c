#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n<=1){
        printf("-1");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&arr[i]);
        arr[i]=a;
    }
    if (arr[0]>arr[1]){
        printf("%d",arr[0]);
    }
    for(int i=1;i<n-1;i++){
        if (arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
            printf("%d",arr[i]);
            return 0;
        }
        }
        
    if(arr[n-1]>arr[n-2]){
        printf("%d",arr[n-1]);
        return 0;
    }
    printf("-1");
    return 0;
}
