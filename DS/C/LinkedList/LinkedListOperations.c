#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} NODE;

void printlist(NODE *first);
void insert(NODE *first);
void delete (NODE *first);

int main()
{
    int ch;
    NODE *first = NULL;
    printf("\nmain(): %p\n", first);
    while (1) // infinite loop
    {
        printf("MAIN MENU\n");
        printf("1. Print List\n");
        printf("2. Insert node\n");
        printf("3. Delete node\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\nBye\n\n");
            exit(0);
            break;
        case 1:
            printlist(first);
            break;
        case 2:
            insert(first);
            break;
        case 3:
            delete (first);
            break;
        default:
            printf("\nInvalid option.\n\n");
        }
    }
}

void printlist(NODE *first)
{
}

void insert(NODE *first)
{
    NODE *current = first;
    printf("\ninsert(): %p\n", first);
    printf("\ninsert(): %p\n", current);
    while (1)
    {
        if (current == NULL)
        {
            break;
        }
    }

    current = malloc(sizeof(NODE));
    printf("Enter a value: ");
    scanf("%d", current->info);
    current->next = NULL;
}

void delete (NODE *first)
{
    
}