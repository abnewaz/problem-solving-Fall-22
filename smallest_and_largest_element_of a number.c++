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
        if(num[i]>num[i+1])
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
//__________________________________________________________k-th smallest element_______________________________________________________


int solve_smallest(int k, int sz, int num[])
{
    int s_value = 0;
    sort_array(sz,num);
    for(int i=0; i<sz; i++)
    {
        if(i == (k-1))
        {
            s_value = num[i];
        }
        
    }
    return s_value;
}

//__________________________________________________________k-th largest element_______________________________________________________


int solve_largest(int k, int sz, int num[])
{
    int l_value = 0;
    sort_array(sz,num);
    for(int i=sz-1; i>=0; i--)
    {
        printf("%d ",num[i]);
        if(i == (k+1))
        {
            l_value = num[i];
        }
        
    }
    return l_value;
}

int main()
{
    int n, k, s_res=0, l_res =0; 
    scanf("%d",&n);
    int numbers[n];
    take_num(n, numbers);
    print_num(n, numbers);
    printf("\n");
    scanf("%d",&k);
    sort_array(n, numbers);
    printf("\n");
    print_num(n, numbers); 
    s_res = solve_smallest(k,n,numbers);
    printf("\n%d-th smallest element = %d\n",k,s_res);
    l_res = solve_largest(k,n,numbers);
    printf("\n%d-th largest element = %d\n",k,l_res);
    return 0;
}