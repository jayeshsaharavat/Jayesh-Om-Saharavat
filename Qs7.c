#include <stdio.h>

int main() {
    int marks[5][3];
    int i, j;

    printf("Enter marks of 5 students in 3 subjects:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            printf("Student %d, Subject %d: ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    // (a) total and average of student
    int total[5];
    float average[5];
    for(i = 0; i < 5; i++) {
        total[i] = 0;
        for(j = 0; j < 3; j++) {
            total[i] += marks[i][j];
        }
        average[i] = total[i] / 3.0;
    }

    printf("\nTotal and Average marks of each student:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d -> Total: %d, Average: %.2f\n", i+1, total[i], average[i]);
    }

    // (b)  highest marks student
    int maxTotal = total[0], highscorer = 0;
    for(i = 1; i < 5; i++) {
        if(total[i] > maxTotal) {
            maxTotal = total[i];
            highscorer = i;
        }
    }
    printf("\nHighest Scorer: Student %d with %d marks\n", highscorer+1, maxTotal);

    // (c) worst performance subject
    float subAvg[3];
    for(j = 0; j < 3; j++) {
        int subTotal = 0;
        for(i = 0; i < 5; i++) {
            subTotal += marks[i][j];
        }
        subAvg[j] = subTotal / 5.0;
    }

    int worstSubject = 0;
    for(j = 1; j < 3; j++) {
        if(subAvg[j] < subAvg[worstSubject]) {
            worstSubject = j;
        }
    }
    printf("\nWorst Subject: Subject %d (Avg: %.2f)\n", worstSubject+1, subAvg[worstSubject]);

    // (d) memory cunsume by array
    printf("\nmemory cunsumed by marks array = %lu bytes\n", sizeof(marks));

    return 0;
}
