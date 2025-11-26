#include <stdio.h>

enum Values{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    printf("SUCCESS=%d, ",SUCCESS);
    printf("FAILURE=%d, ", FAILURE);
    printf("TIMEOUT=%d\n", TIMEOUT);

    return 0;
}
