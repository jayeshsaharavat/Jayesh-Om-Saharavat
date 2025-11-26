#include <stdio.h>

typedef enum {
    RED,
    YELLOW,
    GREEN
} Traffic;

int main() {
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
