#include <stdio.h>

int main() {
    int n, i, num, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }

    printf("%s\n", (found == 1) ? "Found" : "Not Found");

    return 0;
}