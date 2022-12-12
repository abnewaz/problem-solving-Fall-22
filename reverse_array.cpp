#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int main_array[n], reverse_array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &main_array[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        reverse_array[n - 1 - i] = main_array[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", reverse_array[i]);
    }
    return 0;
}