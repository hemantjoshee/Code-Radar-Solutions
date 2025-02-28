#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    int hash[1000];
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if hash[arr[i]]==2{
            printf("%d",hash[arr[i]]);
            break;
        }
    }
}