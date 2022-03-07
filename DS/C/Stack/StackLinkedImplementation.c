#include <stdio.h>
#include <stdlib.h>

void printstack();
void printstack_reverse();

typedef struct node
{
    int info;
    struct node *next;
} NODE;

NODE *top, *temp;

int main()
{
    // NODE 1
    top = malloc(sizeof(NODE));
    top->info = 10;
    top->next = NULL;

    printf("\nAdded 1st element. Stack status is:\n");
    printstack();

    // NODE 2
    temp = top;
    top = malloc(sizeof(NODE));
    top->info = 20;
    top->next = temp;
    printf("\nAdded 2nd element. Stack status is:\n");
    printstack();

    // NODE 3
    temp = top;
    top = malloc(sizeof(NODE));
    top->info = 30;
    top->next = temp;
    printf("\nAdded 3rd element. Stack status is:\n");
    printstack();

    // NODE 4
    temp = top;
    top = malloc(sizeof(NODE));
    top->info = 40;
    top->next = temp;
    printf("\nAdded 4th element. Stack status is:\n");
    printstack();

    // NODE 5
    temp = top;
    top = malloc(sizeof(NODE));
    top->info = 50;
    top->next = temp;
    printf("\nAdded 5th element. Stack status is:\n");
    printstack();

    //------------------------- Deletion -------------------------------

    // NODE 5
    temp = top;
    top = top->next;
    free(temp);
    temp = NULL;
    printf("\nRemoved 5th element. Stack status is:\n");
    printstack();

    // NODE 4
    temp = top;
    top = top->next;
    free(temp);
    temp = NULL;
    printf("\nRemoved 4th element. Stack status is:\n");
    printstack();

    // NODE 3
    temp = top;
    top = top->next;
    free(temp);
    temp = NULL;
    printf("\nRemoved 3rd element. Stack status is:\n");
    printstack();

    // NODE 2
    temp = top;
    top = top->next;
    free(temp);
    temp = NULL;
    printf("\nRemoved 2nd element. Stack status is:\n");
    printstack();

    // NODE 4
    temp = top;
    top = top->next;
    free(temp);
    temp = NULL;
    top = NULL;
    printf("\nRemoved 1st element. Stack status is:\n");
    printstack();

    return 0;
}

void printstack()
{
    if(top == NULL)
    {
        printf("\nStack Empty\n");
        return;
    }

    NODE *it = top;
    while (it != NULL)
    {
        printf("%d\n", it->info);
        it = it->next;
    }
}

void printstack_reverse()
{

}