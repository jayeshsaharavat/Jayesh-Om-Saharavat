#include <stdio.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2;

    for (int x = 1; x <= n; x++) {
        int left_sum = x * (x + 1) / 2;
        int right_sum = total - (x * (x - 1) / 2);

        if (left_sum == right_sum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
