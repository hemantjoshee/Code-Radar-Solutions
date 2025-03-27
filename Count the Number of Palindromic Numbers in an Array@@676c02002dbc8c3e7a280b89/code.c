#include <stdio.h>
int ispalendrome(int a){
    int reverse=a;
    int temp=0;
    while(a){
        temp=temp*10;
        temp+=a%10;
        a=a/10;
    }
}
int main(){
    int a;
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