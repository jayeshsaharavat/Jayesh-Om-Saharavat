#include <stdio.h>

int main() {
    int arr[10], freq[10] = {0};
    int i;

    printf("Enter 10 integers (0-9):\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        // switch-case
        switch (arr[i]) {
            case 0: freq[0]++; break;
            case 1: freq[1]++; break;
            case 2: freq[2]++; break;
            case 3: freq[3]++; break;
            case 4: freq[4]++; break;
            case 5: freq[5]++; break;
            case 6: freq[6]++; break;
            case 7: freq[7]++; break;
            case 8: freq[8]++; break;
            case 9: freq[9]++; break;
            default: printf("Invalid input! Only 0–9 allowed.\n");
        }
    }

    printf("\nFrequency of digits:\n");
    for (i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("Digit %d → %d times\n", i, freq[i]);
        }
    }

    return 0;
}
