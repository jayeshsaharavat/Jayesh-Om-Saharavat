#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main() {
    Student s;
    Student *ptr = &s; 

    strcpy(ptr->name, "John");
    ptr->roll = 106;
    ptr->marks = 91;

    printf("Modified Data: ");
    printf("Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);

    return 0;
}