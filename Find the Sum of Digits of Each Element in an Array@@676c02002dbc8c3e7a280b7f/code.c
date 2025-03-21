#include <stdio.h>
int sumo(int a);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=sumo(temp[i]);
        printf("%d ",arr[i]);
    }
}
int sumo(int a){
    int n=0;
    while (a!=0){
        n+=a%10;
        a=a/10;

    }
    return n;
}