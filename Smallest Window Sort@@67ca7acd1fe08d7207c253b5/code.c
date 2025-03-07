int findUnsortedSubarray(int arr[],int n){
    int l=0;
    int r=n-1;
    while (l<n-1 && arr[l]<=arr[l+1]){
        l++;
    }
    if(l==n) return 0;
    while (r>=0 && arr[r]>=arr[r-1]){
        r--;
    }
    // int min = INT_MAX;
    // int max = INT_MIN;
    // for(int i=l; i<=r; i++){
    //     min = Math.mi
    // }
    return r-l+1;
}
