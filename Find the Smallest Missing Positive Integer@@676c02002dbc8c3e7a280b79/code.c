#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int hash[100] = {0}; // Fixed size hash table (supports numbers 1-99)

    // Read input and mark positive numbers within range [1, 99]
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0 && arr[i] < 100) { // Ensure valid index
            hash[arr[i]] = 1; // Mark the number as present
        }
    }

    // Find the first missing positive integer
    for (int i = 1; i < 100; i++) {  // Fixed the loop condition
        if (hash[i] == 0) {
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}
