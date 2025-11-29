#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    int roll_no;
    int marks;
} Student;

int main() {
    Student *s;
    s = (Student*) malloc(sizeof(Student));
    
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Student allocated dynamically with details: ");
    scanf("%s", s->name);
    scanf("%d", &s->roll_no);
    scanf("%d", &s->marks);
    
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);

    free(s); 

    return 0;
}