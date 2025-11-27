#include <stdio.h>

typedef struct Student_Record {
    char name[100];
    int roll_no;
    int marks;
} student;
int main() {
    student s[3];
    
    printf ("3 students: ");
    for (int i=0 ; i<3 ; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%d", &s[i].marks);
    }
    int max_marks = s[0].marks;
    int j = 0;

    for (int i=1; i<3 ; i++) {
        if (s[i].marks > max_marks) {
            max_marks = s[i].marks;
            j=i;
        }
    }
    printf("Topper: %s (Marks: %d)",s[j].name, max_marks);
    
    return 0;
}