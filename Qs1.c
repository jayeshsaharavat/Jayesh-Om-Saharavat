#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize values
    int largest = arr[0], smallest = arr[0];
    int sum = 0, evenCount = 0, oddCount = 0;

    for (i = 0; i < n; i++) {
        // Find largest
        if (arr[i] > largest)
            largest = arr[i];

        // Find smallest
        if (arr[i] < smallest)
            smallest = arr[i];

        // Sum for average
        sum += arr[i];

        // Count even and odd
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    float average = (float)sum / n;

    printf("Largest number: %d", largest);
    printf("\nSmallest number: %d", smallest);
    printf("\nAverage of numbers: %.2f", average);
    printf("\nEven numbers count: %d", evenCount);
    printf("\nOdd numbers count: %d\n", oddCount);

    return 0;
}
