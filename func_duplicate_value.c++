#include<stdio.h>

void take_num(int size, int num[])
{
    int i;
    for(i=0; i<size; i++)
    {
        scanf("%d",&num[i]);
    }
}

void print_num(int size, int num[])
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",num[i]);
    }
}

void sort_array(int sz, int num[])
{
    int i=0, j, temp;
    //num[0] = 0;
    for(j=0; j<sz; j++)
    {

    
    for(i=0; i<sz-1; i++)
    {
        temp =0;
        if(num[i]<num[i+1])
        {                                           // 3    2   5   1
            temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
        }
        /* if(num[i] == num[i+1])
        {
            
        } */
    }}
}
int solve(int k, int sz, int num[])
{
    int counter = 0;
    sort_array(sz,num);
    for(int i=0; i<sz; i++)
    {
        if(num[i] < k || num[i] > k)
        {
            counter++;
        }
        
    }
    return counter;
}

int main()
{
    int n, k, res=0; 
    scanf("%d",&n);
    int numbers[n];
    take_num(n, numbers);
    print_num(n, numbers);
    printf("\n");
    scanf("%d",&k);
    sort_array(n, numbers);
    printf("\n");
    print_num(n, numbers); 
    res = solve(k,n,numbers);
    printf("\n%d",res);
    return 0;
}