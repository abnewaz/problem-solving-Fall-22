#include<stdio.h>
int main()
{
    int n, i, j, k;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        k=1;
        while (k<=n-i)
        {
            printf(" ");
            k++;
        }
        
        for ( j = 1; j <= 2*i - 1; j++)
        {

            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}