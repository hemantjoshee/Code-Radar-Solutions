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
    arr=temp;
    for(int i=0;i<n;i++){
        arr[i]=sumo(temp[i]);

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