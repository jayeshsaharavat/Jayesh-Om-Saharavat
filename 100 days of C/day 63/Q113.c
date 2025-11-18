#include <stdio.h>

// Function to sort array using simple Bubble Sort
void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (to find kth smallest): ");
    scanf("%d", &k);

    // Sort the array
    sortArray(arr, n);

    // Print kth smallest
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}
