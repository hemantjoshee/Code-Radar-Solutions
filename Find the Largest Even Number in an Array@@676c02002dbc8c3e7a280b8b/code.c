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

    if (largest==-1000){
        printf("-1");
        return 0;
    }
    printf("%d",largest);
}