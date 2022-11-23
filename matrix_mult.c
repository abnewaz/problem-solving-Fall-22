#include<stdio.h>
#include<string.h>

int main()
{
    int l, m, n, i, j, k, a, b, mult_1, mult_2, mult_3, mult_4, res_1, res_2;
    scanf("%d%d",&n,&m);
    printf("%d %d\n",n,m);
    int matrix_a[n][m];
    int matrix_b[n][m];
    int mat_res[n][m];


    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
//            {for(k=0; k<2; k++)
        {
            scanf("%d\t",&matrix_a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
//            {for(k=0; k<2; k++)
        {
            scanf("%d\t",&matrix_b[i][j]);
        }
    }
//    }
    printf("\n");

//    for(k=0; k<2; k++)
//    {
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t",matrix_a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t",matrix_b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
//    }



    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            mat_res[i][j] = 0;
            for(k=0; k<n; k++)
            {

                mat_res[i][j] += matrix_a[i][k]*matrix_b[k][j];



            }
            //printf("\n");
        }
        //printf("\n\n");
    }


    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t",mat_res[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");





    return 0;
}
