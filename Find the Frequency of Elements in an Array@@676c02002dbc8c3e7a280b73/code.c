#include <stdio.h>
#define Max 150
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int hash[Max]={0};
    int visited[Max]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(!visited[arr[i]])
            printf("%d %d\n",arr[i],hash[arr[i]]);
        }
}