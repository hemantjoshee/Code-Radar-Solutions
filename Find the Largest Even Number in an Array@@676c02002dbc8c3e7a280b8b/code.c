#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=-1000;
    for(int i=0;i<n;i++){
        if(arr[i]>largest&&arr[i]%2==0){
            largest=arr[i];
        }
    }

    printf("%d",largest);
}