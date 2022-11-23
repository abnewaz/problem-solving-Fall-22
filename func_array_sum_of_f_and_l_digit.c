#include<stdio.h>
#include<string.h>
#include<math.h>

int sum_ara_dig(int n, int num[]);
int main()
{
    int a,r, i;
    scanf("%d",&a);
    //printf("%d\n",a);
    int number[a];
    for(i=0; i<a; i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0; i<a; i++)
    {
        printf("%d ",number[i]);
    }

    r = sum_ara_dig(a,number);
    printf("\n\n%d",r);
    return 0;
}

int sum_ara_dig(int n, int num[])
{
    int i,j=0, k=0;
    for(i=0; i<n; i++)
    {
        j=0;
        j = num[i]%10 + num[i]/1000;
        k+=j;
    }
    return k;

}
