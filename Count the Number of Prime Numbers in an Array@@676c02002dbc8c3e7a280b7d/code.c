#include <stdio.h>
#include <math.h>
isPrime(int a);
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
        prime+=isPrime(i)
    }
    printf("%d",&prime);
}
isPrime(int a){
    for(int i=0;i<sqrt(a);i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}