#include<stdio.h>
#include<string.h>

int main()
{
    int m=0, n, i, j, target, sum=0;
    printf("Enter number of input: \n");
    scanf("%d",&n);
    int num[n];
    printf("Enter values: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n");
    printf("Enter value for the target :\n");
    scanf("%d",&target);
    printf("\n");
    printf("Target: %d\n",target);
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d   ",num[i]);
    }
    printf("\n");
    m = target/2;
    for(i=0; i<n; i++)
    {
        sum = 0;
        for(j=i+1; j<n; j++)
        {

                sum = num[i] + num[j];
                if(sum == target)
                {
                    printf("YES");
                    i = n;
                    break;
                    //return 0;
                }
                else if(num[n-2]==num[i])
                {
                    printf("NO");
                    i = n;
                    break;
                }


        }
    }
    return 0;
}
