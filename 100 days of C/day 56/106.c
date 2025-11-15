#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n],found=0;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j=i+1 ; j<n ; j++ ) {
            if (arr[j]>arr[i]) {
                printf("%d, ",arr[j]);
                found=1;
                break;
            }
            
        } if (found==0)  printf("%d, ",-1);
        found=0;
    }
    
    return 0;
}