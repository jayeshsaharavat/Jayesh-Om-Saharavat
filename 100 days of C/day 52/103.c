#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += nums[i];
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++) {
        int right_sum = total - left_sum - nums[i];
        if (left_sum == right_sum) {
            printf("%d\n", i);
            return 0;
        }
        left_sum += nums[i];
    }

    printf("-1\n");
    return 0;
}
