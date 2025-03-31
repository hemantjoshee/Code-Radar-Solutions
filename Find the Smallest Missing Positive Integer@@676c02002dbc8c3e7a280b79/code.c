#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int hash[100] = {0}; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0 ) { 
            hash[arr[i]] = 1; 
        }
    }
    for (int i = 1; i < 100; i++) {  
        if (hash[i] == 0) {
            printf("%d\n", i);
            return 0;
        }
    }

    return 0;
}
