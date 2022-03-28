#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

typedef struct node NODE;

void printqueue(NODE **front, NODE **rear);
void enqueue(NODE **front, NODE **rear);
void dequeue(NODE **front, NODE **rear);

int main()
{
    NODE *front = NULL, *rear = NULL;
    int ch;

    while (1)
    {
        printf("MAIN MENU\n");
        printf("1. Print Queue\n");
        printf("2. Enqueue\n");
        printf("3. Dequeue\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printqueue(&front, &rear);
            break;
        case 2:
            enqueue(&front, &rear);
            break;
        case 3:
            dequeue(&front, &rear);
            break;
        default:
            printf("\nInvalid option\n\n");
        }
    }
    return 0;
}

void printqueue(NODE **front, NODE **rear)  //O(n)
{
    if (*front == NULL) // Addressing underflow condition
    {
        printf("\nQueue is empty, nothing to print\n\n");
        return;
    }

    printf("\nPrinting queue...\n\n");
    NODE *current = *front;
    while (current != NULL)
    {
        printf("%d\n", current->info);
        current = current->next;
    }
    printf("\n...End of queue.\n\n");
}

void enqueue(NODE **front, NODE **rear) //O(1)
{
    // if (*rear == MAX - 1) // Addressing overflow condition
    // {
    //     printf("\nQueue is full cannot add any more element\n\n");
    //     return;
    // }

    if (*front == NULL)
    {
        *front = *rear = malloc(sizeof(NODE));
    }
    else
    {
        *rear = (*rear)->next = malloc(sizeof(NODE));
    }

    printf("\nEnter a value: ");
    scanf("%d", &(*rear)->info);
    (*rear)->next = NULL;
    printf("\nElement Added\n\n");
}

void dequeue(NODE **front, NODE **rear)
{
    if (*front == NULL) // Addressing underflow condition
    {
        printf("\nQueue is empty, nothing to remove\n\n");
        return;
    }

    NODE *temp = *front;
    *front = (*front)->next;
    free(temp);
    
    printf("\nElement Deleted\n\n");
}