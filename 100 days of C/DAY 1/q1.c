//Write a program to input two numbers and display their sum.

#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);

    printf("The sum of a and b is %d", a+b);
    return 0;
}