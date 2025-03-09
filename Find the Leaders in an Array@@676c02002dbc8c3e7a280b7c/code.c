#include <stdio.h>
void reverse(int arr[],int n){
    int start=0;
    int end =(sizeof(arr)/4)-1;
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
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[n-1];
    int j=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=max){
            arr2[j++]=arr[i];
            max=arr[i];
        }
    }
    reverse(arr2,j);
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }


}