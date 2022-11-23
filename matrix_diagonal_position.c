#include<stdio.h>
#include<string.h>

int main()
{
    int a, b, m, n, o, i, j, k, dia;
    printf("Enter matrix size: ");          //matrix size input
    scanf("%d",&n);
    int matrix[n][n];                       //matrix diclaration
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matrix[i][j]);      //input of matrix values
        }
    }
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",matrix[i][j]);       // print matrix
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        printf("row-%d and column-%d =\t",i+1,i+1);
        for(j=0; j<n; j++)
        {
            if(i==j)
            {
                a=i;
                for(k=0; k<n; k++)
                {
                    if(a!=k)
                    {
                        printf("%d   ",matrix[a][k]);
                    }
                }
                for(k=0; k<n; k++)
                {
                    if(a!=k)
                    {
                        printf("%d   ",matrix[k][a]);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
