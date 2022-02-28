#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void printstack(int *stack, int *size);
void push(int *stack, int *size);
void pop(int *stack, int *size);

int main()
{
    int stack[MAX], size = 0, ch;

    while (1)
    {
        printf("MAIN MENU\n");
        printf("1. Print stack\n");
        printf("2. Push\n");
        printf("3. Pop\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printstack(stack, &size);
            break;
        default:
            break;
        }
    }
    return 0;
}

void printstack(int *stack, int *size)
{
    // for (int i = 0; i < *size; i++)
    {
        printf("%d\n", size[10]);
    }
}