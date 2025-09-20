#include <stdio.h>

int main() {
    int matrix[4][4];
    int i, j;

    printf("Enter elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // maximum in row
    printf("\nMaximum element in each row:\n");
    for(i = 0; i < 4; i++) {
        int maxRow = matrix[i][0];
        for(j = 1; j < 4; j++) {
            if(matrix[i][j] > maxRow)
                maxRow = matrix[i][j];
        }
        printf("Row %d: %d\n", i+1, maxRow);
    }

    //  maximum in column
    printf("\nMaximum element in each column:\n");
    for(j = 0; j < 4; j++) {
        int maxCol = matrix[0][j];
        for(i = 1; i < 4; i++) {
            if(matrix[i][j] > maxCol)
                maxCol = matrix[i][j];
        }
        printf("Column %d: %d\n", j+1, maxCol);
    }

    return 0;
}
