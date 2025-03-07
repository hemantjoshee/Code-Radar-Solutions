int findUnsortedSubarray(int arr[],int n){
    int l=0;
    int r=n-1;
    while (l<n && arr[l]>=arr[l-1]){
        l++;
    }
    while (r>0 && arr[r]>=arr[r-1]){
        r--;
    }
    return r-l+1;
    
}
