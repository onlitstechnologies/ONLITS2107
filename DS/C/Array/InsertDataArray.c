#include "common"
#define MAX 100

int main()
{
    int arr[MAX] = {10, 20, 30};
    int size = 3;
    int index, item, i;
    display(arr, size);
    printf("Enter item to insert: ");
    scanf("%d", &item);
    printf("Enter index: ");
    scanf("%d", &index);
    for (i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = item;
    size++;
    display(arr, size);
}
