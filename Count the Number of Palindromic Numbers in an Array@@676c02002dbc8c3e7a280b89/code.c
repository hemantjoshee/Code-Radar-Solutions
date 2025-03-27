#include <stdio.h>
int ispalendrome(int a){
    int reverse=a;
    if (a<0){
        return 0;
    }
    int temp=0;
    while(a){
        temp=temp*10;
        temp+=a%10;
        a=a/10;
    }
    if (temp==reverse){
        return 1;
    }
    return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<a;i++){
        if(ispalendrome(arr[i])){
            count++;
        }
    }
        printf("%d",count);

}