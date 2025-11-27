#include <stdio.h>

typedef struct Student_Record {
    char name[100];
    int roll_no;
    int marks;
} student;
int main() {
    student s;

    // For input
    printf("Name: ");
    scanf("%s", s.name);

    printf("Roll: ");
    scanf("%d", &s.roll_no);

    printf("Marks: ");
    scanf("%d", &s.marks);

    // For Output

    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll_no, s.marks);

    return 0;
}