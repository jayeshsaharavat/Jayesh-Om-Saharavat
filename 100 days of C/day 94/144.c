#include <stdio.h>

typedef struct {
    char name[100];
    int roll_no;
    int marks;
} student;

void print_record(student s) {
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll_no, s.marks);
}

int main() {
    student s;

    printf("Student: ");
    scanf("%s",s.name);
    scanf("%d",&s.roll_no);
    scanf("%d",&s.marks);

    print_record(s);

    return 0;
}