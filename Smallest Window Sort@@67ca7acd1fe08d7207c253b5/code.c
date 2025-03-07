int findUnsortedSubarray(int arr[],int n);
for(int i=0;i<n;i++){
    if(arr[i]==i+1){
        continue;
    }
    else{
        for(int l=a[i];l<n;l++){
            if(arr[l]==l+1){
                int r=l;
                return r-l;
            }
        }
    }
}