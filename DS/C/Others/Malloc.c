#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *name;
    int n;

    // printf("Enter the length of your name: ");
    // scanf("%d", &n);
    // name = calloc((n+1), sizeof(char));
    printf("Please enter your name: ");
    // getchar();
    // scanf("%[^\n]", name);          //case 1
    scanf("%[^\n]%n", name=malloc(n), &n);
    printf("Hello! %s\n", name);
    printf("The length of your name is %ld.\n", strlen(name));
    return 0;
}