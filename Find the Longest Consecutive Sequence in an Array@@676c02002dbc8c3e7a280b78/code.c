#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int longestConsecutiveSequence(int arr[], int n) {
    if (n == 0) return 0;
    
    qsort(arr, n, sizeof(int), compare);
    
    int longest = 1, current = 1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            continue; // Skip duplicates
        }
        if (arr[i] == arr[i - 1] + 1) {
            current++;
        } else {
            longest = (current > longest) ? current : longest;
            current = 1;
        }
    }
    
    return (current > longest) ? current : longest;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("%d\n", longestConsecutiveSequence(arr, n));
    
    return 0;
}
