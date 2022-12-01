#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    int *ptr = ara;
    for (i = 0; i < n-1; i++)
    {
        scanf("%d ", &*ptr + i);
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr + i);
    }

    return 0;
}