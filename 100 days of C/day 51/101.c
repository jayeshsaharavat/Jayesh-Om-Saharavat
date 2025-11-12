#include <stdio.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int num[size];
    printf("Enter elements in sorted way: ");
    for (int i=0 ; i<size ; i++ ) {
        scanf("%d",&num[i]);
    }
    int target,target_found=0;
    printf("\ntarget = ");
    scanf("%d",&target);

    for (int i=0 ; i<size ; i++ ) {  // For first occurence
        if (num[i] == target) {
            printf("%d,",i);
            target_found=1;
            break;
        }
    }
    for (int i=size-1 ; i>=0 ; i-- ) { // For last occurence
        if (num[i] == target) {
            printf("%d",i);
            target_found=1;
            break;
        }
    }
    if (target_found == 0) {
        printf("%d,%d",-1,-1);
    }
    return 0;
}