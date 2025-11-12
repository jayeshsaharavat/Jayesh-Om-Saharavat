#include <stdio.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements in sorted way: ");
    for (int i=0 ; i<size ; i++ ) {
        scanf("%d",&arr[i]);
    }
    int x,ceil_of_x=arr[0];
    int found=0;
    printf("\nx = ");
    scanf("%d",&x);

    for (int i=0 ; i<size ; i++) { //To put ceil_of_x as largest element of array
        if (arr[i]>ceil_of_x) {
            ceil_of_x=arr[i];
        }
    }
    for (int i=0 ; i<size ; i++) {
        if (arr[i]>=x && arr[i]<=ceil_of_x) {
            ceil_of_x=arr[i];
        }
    }
    for (int i=0 ; i<size ; i++ ) { 
        if (arr[i] == ceil_of_x) {
            printf("%d",i);
            found=1;
            break;
        }
    }
    if (found == 0) {
        printf("%d",-1);
    }
    return 0;
}