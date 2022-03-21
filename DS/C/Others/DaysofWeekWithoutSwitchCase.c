#include <stdio.h>

int main()
{
    int n;
    char day[][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    char serial[][10] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh"};
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n >= 1 && n <= 7)        //for validation
    {
        printf("%s is the %s day of week.\n", day[n-1], serial[n-1]);

    }
    else
    {
        printf("Out of range value.\n");
    }
    return 0;
}