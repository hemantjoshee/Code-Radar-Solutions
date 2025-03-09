void selectionSort(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
            }
        }
    }
}