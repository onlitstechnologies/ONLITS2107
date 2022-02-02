#include <stdio.h>

typedef struct
{
    int roll_no;
    char name[20];
}STUDENT;

int main()
{
    typedef int marks;
    marks e, m, s, tm;
    STUDENT s;
    printf("Enter the marks of english: ");
    scanf("%d",&e);
    printf("Enter the marks of maths: ");
    scanf("%d", &m);
    printf("Enter the marks of science: ");
    scanf("%d", &s);
    tm = e + m + s;
    printf("The total marks is %d.\n", tm);
    return 0;
}