// 
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int hash[n + 1]; // The missing number is at most `n+1`
    
    // Initialize hash array to 0
    for (int i = 0; i <= n; i++) {
        hash[i] = 0;
    }

    // Read input and mark positive numbers
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0 && arr[i] <= n) { // Only consider numbers in range [1, n]
            hash[arr[i]] = 1;  // Mark number as present
        }
    }

    // Find the first missing positive number
    for (int i = 1; i <= n; i++) { // Iterate up to `n`
        if (hash[i] == 0) {
            printf("%d\n", i);
            return 0;
        }
    }

    // If all numbers from 1 to n are present, return n+1
    printf("%d\n", n + 1);

    return 0;
}
