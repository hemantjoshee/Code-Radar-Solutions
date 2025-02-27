#include <stdio.h>
#include <math.h>
int isPrime(int a);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    int prime=0;
    for(int i=0;i<n;i++){
        prime+=isPrime(arr[i]);
    }
    printf("%d",prime);
}
int isPrime(int a){
    if(a==1){
        return 0;
    }
    else if (a==2){
        return 1;
    }
    for(int i=2;i<sqrt(a);i++){
        if (a%i==0){
            return 0;
        }
    }
    return 1;
}