#include<stdio.h>

void input_array(int sz, int num[])
{
    int i;
    for(i=0; i<sz; i++)
    {
        scanf("%d",&num[i]);
    }
}

void print_array(int sz, int num[])
{
    int i;
    for(i=0; i<sz; i++)
    {
        printf("%d  ",num[i]);
    }
}

int array_sum(int sz, int num[])
{
    int i, temp=0;
    for(i=0; i<sz; i++)
    {
        if((num[i]%10)==0)
        {
            //printf("__%d__ ",num[i]);
            temp = temp + num[i];
        }
    }
    //printf("...%d... ",temp);
    return temp;
}
int main()
{
    int n, result;
    scanf("%d",&n);
    int numbers_array[n];
    input_array(n, numbers_array);
    print_array(n, numbers_array);
    result = array_sum(n, numbers_array);
    printf("\n%d ",result);

    return 0;
}