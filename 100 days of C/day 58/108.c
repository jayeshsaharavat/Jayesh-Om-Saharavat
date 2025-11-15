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

    int answer[n];
    
    for (int i=0 ; i<n ; i++) {
        answer[i]=1;        
        for (int j=0 ; j<n ; j++) {
            if (i!=j) {
                answer[i]=answer[i] * nums[j];
            }
        }
    } 
    printf("[");
    for (int i=0 ; i<n ; i++) {
        printf("%d",answer[i]);
        if (i < n-1) printf(",");
    }
    printf("]");
    return 0;
}