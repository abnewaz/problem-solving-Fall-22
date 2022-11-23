#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, m, n, r, row, col, glass=0, csum=0,rsum=0, k;
    printf("R = ");
    scanf("%d",&r);
    printf("%d\n",r);

    int matrix[8][8]= {0};
    int row_p[r], col_p[r];

    printf("Enter rooks position: \n");
    for(i=0; i<r; i++)              //row number
    {
        scanf("%d %d",&row,&col);
        m=row-1;
        n=col-1;
        matrix[m][n]=1;

//        for(j=0; j<2; j++)          //column number
//        {
//            scanf("%d",&matrix[i][j]);
//        }

    }

    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");

    }

    for(i=0; i<8; i++)
    {
        rsum = 0;
        csum = 0;

        for(j=0; j<8; j++)
        {
            rsum += matrix[i][j];
            csum += matrix[j][i];

        }
        if(rsum >1)
        {
            for(k=0; k<8; k++)
            {
                matrix[i][k]=0;
            }

        }
        if(csum>1)
        {
            for(k=0; k<8; k++)
            {
                matrix[k][i]=0;
            }
        }

    }

    printf("\n\n");
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");

    }

    printf("\n\n");
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(matrix[i][j] == 1)
            {
                printf("%d %d\n",i+1,j+1);
            }
        }
        printf("\n");

    }


    return 0;
}
