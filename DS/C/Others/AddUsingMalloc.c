#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, *b;
    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    
    scanf("%d%d", a, b);

    int sum = (*a) + (*b);

    printf("The sum is %d.\n", sum);
}