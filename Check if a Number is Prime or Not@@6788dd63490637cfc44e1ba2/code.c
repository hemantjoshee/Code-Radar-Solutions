#include <stdio.h>
#include<math.h>
int main() {
    int a;
    scanf("%d",&a);
    int isprime = 1;
    if (a<=1){
        isprime=0;
    }else if(a==2){
        isprime=1;
    }else{
        for(int i=1;i<=sqrt(a);i++){
            if (a%i==0){
                isprime=0;
                break;
            }
        }
    }
    if (isprime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}