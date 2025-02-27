#include <stdio.h>
int main(){
    int a;
    scanf("%d",&n);
    int arr[a];
    for(int i=0;i<a;i++){
        int n;
        scanf("%d",&n);
        arr[i]=n;
    }
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if arr[i]>largest{
            largest=arr[i];
        }
        if arr[i]<smallest{
            smallest=arr[i];
        }
    }
    printf("%d %d",&smallest,&largest);


}