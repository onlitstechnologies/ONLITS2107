#include "common"
#define SIZE 5

void insertion_sort(int *arr);

int main()
{
    int arr[] = {8, 5, 2, 7, 6};
    printf("The array before sorting:\n");
    display(arr, SIZE);
    printf("\nThe array after sorting:\n");
    insertion_sort(arr);
    display(arr, SIZE);
    return 0;
}

void insertion_sort(int *arr)
{
    int i, j, current;
    for(i=1; i<SIZE; i++)
    {
        current = arr[i];
        for(j=i-1; arr[j]>current; j--)
        {
            if(j<0)
            {
                // printf("Less than zero\n");
                break;
            }
            arr[j+1] = arr[j];
        }
        arr[j+1] = current;
    }
}