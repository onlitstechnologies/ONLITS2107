#include <stdio.h>
int main()
{
    double arr[5];
    printf("The value of arr is %p.\n", arr);
    printf("The address of arr is %p.\n", &arr);
    printf("The address of arr[0] is %p.\n", &arr[0]);
    printf("The address of arr[1] is %p.\n", &arr[1]);
    printf("The address of arr[2] is %p.\n", &arr[2]);
    printf("The address of arr[3] is %p.\n", &arr[3]);
    printf("The address of arr[4] is %p.\n", &arr[4]);
    // arr[0] = 10;
    // printf(" arr is pointing to %d.\n", *arr);
    // printf("The value of arr[0] is %d.\n", arr[0]);
    return 0;
}