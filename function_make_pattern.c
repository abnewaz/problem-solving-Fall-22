#include<stdio.h>
#include<string.h>
#include<math.h>

int pattern(int x);
int main()
{
    int a,res;
    scanf("%d",&a);
    res = pattern(a);

    //printf("%d\n",a);




    return 0;
}

int pattern(int x)
{
    int i, j, k;
    for(i=0; i<x; i++)
    {
              printf(" ");

        for(j=0; j<=i; j++)
        {
            printf(" ");

        }
        //printf("\n");
            for(k=x-i; k>1; k--)
            {
                printf("**");
            }
            printf("*\n");
    }

//    for(i=x; i>0; i--)
//    {
//        printf("#");
//       // for(j<=x; j>0; j--)
//        for(j=x; j>0; j--)
//        {
//            printf("**");
//        }
//        printf("*\n");
//
//    printf("\n");
 //   }
    return 0;
}
