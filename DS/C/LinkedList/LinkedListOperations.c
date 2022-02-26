#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
} NODE;

void printlist();
void insert();
void delete ();

NODE *first = NULL; // global first pointer

int main()
{
    int ch;
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
            printlist();
            break;
        case 2:
            insert();
            break;
        case 3:
            delete ();
            break;
        default:
            printf("\nInvalid option.\n\n");
        }
    }
    return 0;
}

void printlist()
{
    NODE *current = first;
    if (current == NULL) // Checking whether list is empty
    {
        printf("\nList is empty, nothing to print.\n\n");
        return;
    }

    printf("\nPrinting list ...\n\n");
    do
    {
        printf("%d\n", current->info);
        current = current->next;
    } while (current != NULL);
    printf("\nEnd of list.\n\n");
}

void insert()
{
    NODE *current = first;
    printf("\nEnter value: ");
    if (current == NULL) // code for first node
    {
        first = current = malloc(sizeof(NODE));
        scanf("%d", &current->info);
        current->next = NULL;
        printf("\nNode added\n\n");
        return;
    }

    while (current->next != NULL)      //locating the last node
    {
        current = current->next;
    }

    current->next = malloc(sizeof(NODE));
    current = current->next;
    scanf("%d", &current->info);
    current->next = NULL;
    printf("\nNode added\n\n");
}

void delete ()
{
    
}