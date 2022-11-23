#include<stdio.h>
#include<string.h>
#include<math.h>
int pos_neg(int a);
int main()
{
    int n, res=0;
    scanf("%d",&n);

    //printf("%d\n",a);

    res = pos_neg(n);
    //printf("%d ", res);


    return 0;
}

int pos_neg(int n)
{
    int i;
    if(n>0)
    {
        i = n;
        while(i >= (-n))
        {
            printf("%d ",i);
            i--;
            //return i;
        }
    }
    else if(n<0)
    {
        i = n;
        while(i <= -n)
        {
            printf("%d ",i);
            i++;
            //return i;
        }
    }
    return 0;
}
