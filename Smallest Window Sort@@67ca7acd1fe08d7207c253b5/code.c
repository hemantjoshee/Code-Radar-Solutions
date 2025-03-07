int findUnsortedSubarray(int arr[], int n) {
    int l = 0, r = n - 1;

    // Find the left boundary
    while (l < n - 1 && arr[l] <= arr[l + 1]) {
        l++;
    }
    
    // If the whole array is already sorted
    if (l == n - 1) return 0;

    // Find the right boundary
    while (r > 0 && arr[r] >= arr[r - 1]) {
        r--;
    }

    // Find min and max in the unsorted subarray
    int minVal = *min_element(arr + l, arr + r + 1);
    int maxVal = *max_element(arr + l, arr + r + 1);

    // Expand left boundary
    while (l > 0 && arr[l - 1] > minVal) {
        l--;
    }

    // Expand right boundary
    while (r < n - 1 && arr[r + 1] < maxVal) {
        r++;
    }

    return r - l + 1;
}