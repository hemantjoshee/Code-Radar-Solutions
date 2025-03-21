#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bool ascending=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            ascending=false;
        }
    }
    bool descending=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            descending=false;
        }
    }
    if(ascending==false||descending==false){
        printf("NO");
    }
    else{
        printf("YES");
    }

}