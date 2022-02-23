#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct __attribute__((packed)) student
{
    int rollno;         //4
    char name[30];      //30

    struct student* next;   //8
} STUDENT;

// typedef struct student STUDENT;

int main()
{
    STUDENT *first;
    // printf("STUDENT: %ld\n", sizeof(STUDENT));
    // printf("rollno: %ld\n", sizeof(first->rollno));
    // printf("name: %ld\n", sizeof(first->name));
    // printf("next: %ld\n", sizeof(first->next));

    while (1)
    {
        printf("MAIN MENU\n");
        printf("1. Print list\n");
    }
    
    
    return 0;
}