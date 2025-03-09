#include <stdio.h>
int* reverse(int arr[]){
    int start=0;
    int end =(sizeof(arr[])/4)-1;
    while(start>end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    return arr[];
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[i];
    int j=0;
    for(int i=n-1;i>0;i--){
        if(arr[i]>=max){
            arr2[j++]=arr[i];
        }
    }
    reverse(arr2);
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }


}