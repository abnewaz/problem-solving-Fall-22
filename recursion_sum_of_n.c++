#include<stdio.h>

int sum_rec(int num)
{   
    if(num>0)
    {
        return num + sum_rec(num-1);        
    }
    else
    {
        return 0;
    }
    
}
int main(void)
{
    int n, res;
    scanf("%d",&n);
    res = sum_rec(n);
    printf("\n\n%d\n",res);
    return 0;
}