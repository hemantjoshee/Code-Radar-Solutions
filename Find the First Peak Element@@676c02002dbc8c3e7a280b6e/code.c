#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    for(int i=0;i<n;i++){
        if (i==0){
            if(arr[i]>arr[i+1]){
                printf("%d",arr[i]);
                break;
            }
        }
        else if (arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
            printf("%d",arr[i]);
            break;
        }
        else if(i==n-1){
            if(arr[i]>arr[i-1]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
}