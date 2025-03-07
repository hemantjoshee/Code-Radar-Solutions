#include <limits.h>
int findUnsortedSubarray(int a[],int n){
    int l = 0 ;
    int r = n - 1 ;
    while ( l < n - 1 && a[l] < a[l+1]){
        l++;
    }
    while ( r>0 && a[r]>a[r-1]){
        r--;
    }

    int min =INT_MAX;
    int max=INT_MIN;
    for(int i=l;i<r;i++){
        if (a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    while(l>0 && a[l-1]>min){
        l--;
    }
    while(r<n-1 &&a[r+1]<max){
        r++;
    }
    return r-l+1
}
