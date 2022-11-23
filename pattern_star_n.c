#include<stdio.h>
#include<string.h>

int main()
{
    int n, m, i, j;
    printf("Enter a value for star\n");
    scanf("%d",&n);

    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        for(m=0; m<n; m++)
        {
            printf("*");
        }
        printf("\n");

    }


    return 0;
}
