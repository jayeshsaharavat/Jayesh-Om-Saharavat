#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of m: ");
    scanf("%d", &m);

    if (m > n) {
        printf("Invalid input: m cannot be greater than array size\n");
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < m; i++)
        sum += arr[i];

    int max_sum = sum;

    for (int i = m; i < n; i++) {
        sum += arr[i] - arr[i - m];
        if (sum > max_sum)
            max_sum = sum;
    }

    printf("%d\n", m, max_sum);

    return 0;
}