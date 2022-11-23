#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int a,r;
    scanf("%d",&a);
    //printf("%d\n",a);

    r = find_divisors(a);
    //printf("%d ",r);



    return 0;
}
int find_divisors(int n)
{
    int i, res;
    for(i=n; i>=1; i--)
    {
        //printf("%d________\n",i);
        if(n%i == 0)
        {
            res =0;
            res = n/i;
            printf("%d ",res);

        }
        else
        {
            //printf("%d ",i);
            continue;
        }

    }
    return 0;
}
