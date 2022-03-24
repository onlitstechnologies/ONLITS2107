#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void printqueue(int *queue, int *front, int *rear);
void enqueue(int *queue, int *front, int *rear);
void dequeue(int *queue, int *front, int *rear);

int main()
{
    int queue[MAX];
    int front = -1, rear = -1;
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
            printqueue(queue, &front, &rear);
            break;
        case 2:
            enqueue(queue, &front, &rear);
            break;
        case 3:
            dequeue(queue, &front, &rear);
            break;
        default:
            printf("\nInvalid option\n\n");
        }
    }
    return 0;
}

void printqueue(int *queue, int *front, int *rear)  //O(n)
{
    if (*front == -1) // Addressing underflow condition
    {
        printf("\nQueue is empty, nothing to print\n\n");
        return;
    }

    printf("\nPrinting queue...\n\n");
    for (int i = *front; i <= *rear; i++)
    {
        printf("%d\n", queue[i]);
    }
    printf("\n...End of queue.\n\n");
}

void enqueue(int *queue, int *front, int *rear) //O(1)
{
    if (*rear == MAX - 1) // Addressing overflow condition
    {
        printf("\nQueue is full cannot add any more element\n\n");
        return;
    }

    if (*front == -1)
    {
        *front = *rear = 0;
    }
    else
    {
        (*rear)++;
    }

    printf("\nEnter a value: ");
    scanf("%d", &queue[*rear]);
    printf("\nElement Added\n\n");
}

void dequeue(int *queue, int *front, int *rear)     //O(n)
{
    if (*front == -1) // Addressing underflow condition
    {
        printf("\nQueue is empty, nothing to remove\n\n");
        return;
    }

    for (int i = *front; i < *rear; i++)
    {
        queue[i] = queue[i + 1];
    }

    if (*rear == 0)
        (*front)--;

    (*rear)--;

    printf("\nElement Deleted\n\n");
}