#include <stdio.h>
void reverse(int arr[],,int start,int end){
    
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k);
    reverse(arr,k+1,n-1);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}