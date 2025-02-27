void bubbleSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for (int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp
            }
        }
    }
}
int[] printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf(arr[i] + " ");
    }
}