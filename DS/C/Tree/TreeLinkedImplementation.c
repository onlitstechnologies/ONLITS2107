#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} NODE;

void display(NODE *root);
void insert(NODE *root);
void delete ();

int main()
{
    NODE *root = NULL;
    int ch;
    while (1)
    {
        printf("MAIN MENU\n");
        printf("1. Display Tree\n");
        printf("2. Insert Node\n");
        printf("3. Remove Node\n");
        printf("Enter choice (0 to exit): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            display(root);
            break;
        case 2:
            insert(root);
            break;
        default:
            printf("\nInvalid option\n\n");
        }
    }
}

void display(NODE *root)
{
    if(root == NULL)
    {
        printf("\nTree empty. Nothing to display\n\n.");
        return;
    }
}

void insert(NODE *root)
{
    if(root == NULL)
    {
        root = malloc(sizeof(NODE));
        printf("Enter a value: ");
        scanf("%d", root->data);
        root->left = NULL;
        root->right = NULL;
        return;
    }
    
}

void delete ()
{
}