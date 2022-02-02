#include <stdio.h>
int natural(int n);

int main()
{
    int n = 100;
    natural(n);
    return 0;
}

int natural(int n)
{
    if (n == 1)
    {
        printf("%d\n", n);
        return n;
    }
    // printf("%d\n", n);
    natural(n - 1);
    printf("%d\n", n);
    return n;
}