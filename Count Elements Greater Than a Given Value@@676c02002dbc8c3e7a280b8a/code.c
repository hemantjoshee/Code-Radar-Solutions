#include<stdio.h>
int main(){
    int n,v;
    scanf("%d %d",&n,&v);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l=0;
    for (int i=0;i<n;i++){
        if(arr[i]>v){
            l++;
        }
    }
    printf("%d",l);
}