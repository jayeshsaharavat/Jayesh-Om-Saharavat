#include <stdio.h>

void printMaxInSubarrays(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        printf("%d ", max);
    }
    printf("\n");
}

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid input: k must be between 1 and %d\n", n);
        return 0;
    }

    printf("Maximum elements in each subarray of size %d are:\n", k);
    printMaxInSubarrays(arr, n, k);

    return 0;
}