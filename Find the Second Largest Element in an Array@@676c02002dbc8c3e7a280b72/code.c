#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int largest;
    int sLargest;
    for(int i=0; i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    largest=arr[0];
    sLargest=-1;
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            sLargest=largest;
            largest=arr[i];
        }
        if (arr[i]<largest && arr[i]>sLargest){
            sLargest=arr[i];
        }
    }
    printf("%d",sLargest);

}