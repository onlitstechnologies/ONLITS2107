#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct __attribute__((packed)) student
{
    int rollno;    // 4
    char name[30]; // 30

    struct student *next; // 8
} STUDENT;

// typedef struct student STUDENT;

void printlist();
void append();
void delete();

STUDENT *head = NULL;

int main()
{
    // printf("STUDENT: %ld\n", sizeof(STUDENT));
    // printf("rollno: %ld\n", sizeof(first->rollno));
    // printf("name: %ld\n", sizeof(first->name));
    // printf("next: %ld\n", sizeof(first->next));

    while (1)
    {
        int ch;
        printf("MAIN MENU\n");
        printf("1. Print list\n");
        printf("2. Append\n");
        printf("3. Delete\n");
        printf("Enter choice (0 to exit):\t[ ]\b\b");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("Bye\n");
            exit(0);
            break;
        case 1:
            printlist();
            break;
        case 2:
            append();
            break;
        case 3:
            delete();
            break;
        default:
            printf("\nInvalid Option.\n\n");
            break;
        }
    }

    return 0;
}

void printlist()
{
    if (head == NULL)
    {
        printf("\nList is empty, there is nothing to print.\n\n");
        return;
    }

    STUDENT *current = head;

    printf("\n%-10s%s\n", "Roll#", "Name");
    do
    {
        printf("%-10d%s\n", current->rollno, current->name);
        current = current->next;
    } while (current != NULL);

    printf("\nEnd of list.\n\n");
}

void append()
{
    if (head == NULL) // code for the first node
    {
        head = malloc(sizeof(STUDENT));
        printf("\nEnter roll number: ");
        scanf("%d%*c", &head->rollno);
        printf("Enter name: ");
        scanf("%[^\n]", head->name);
        head->next = NULL;
        printf("\nData appended.\n\n");
        return;
    }

    STUDENT *current = head;
    while (current->next != NULL)
    {
        current = current->next; // locating the last node
    }

    current->next = malloc(sizeof(STUDENT));
    current = current->next;
    printf("\nEnter roll number: ");
    scanf("%d%*c", &current->rollno);
    printf("Enter name: ");
    scanf("%[^\n]", current->name);
    current->next = NULL;
    printf("\nData appended.\n\n");
}

void delete ()
{
    if (head == NULL)
    {
        printf("\nList is empty, there is nothing to delete.\n\n");
        return;
    }

    if(head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("\nData deleted\n\n");
        return;
    }

    STUDENT *current = head;
    while (current->next->next != NULL) // locating the penultimate node
    {
        current = current->next; 
    }

    free(current->next->next);
    current->next = NULL;
    printf("\nData deleted\n\n");
}