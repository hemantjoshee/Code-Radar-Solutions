#include <limits.h>

// Function to find the length of the smallest subarray to be sorted
int findUnsortedSubarray(int arr[], int n) {
    int l = 0, r = n - 1;

    // Find the first element from left that is out of order
    while (l < n - 1 && arr[l] <= arr[l + 1]) {
        l++;
    }

    // If the entire array is sorted
    if (l == n - 1) return 0;

    // Find the first element from right that is out of order
    while (r > 0 && arr[r] >= arr[r - 1]) {
        r--;
    }

    // Find the min and max in the unsorted subarray
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = l; i <= r; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    // Expand left boundary
    while (l > 0 && arr[l - 1] > min_val) {
        l--;
    }

    // Expand right boundary
    while (r < n - 1 && arr[r + 1] < max_val) {
        r++;
    }

    return r - l + 1;
}
