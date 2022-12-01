#include<stdio.h>




////////////////////////////////////////////////////_____take array input_____///////////////////////////////////////////////////////




void num_input_ara(int sz, int num[])
{
    int i; 
    for(i=0; i<sz; i++)
    {
        scanf("%d",&num[i]);
    }    
}


////////////////////////////////////////////////////_____ print array _____///////////////////////////////////////////////////////




void num_print_ara(int sz, int num[])
{
    int i; 
    for(i=0; i<sz; i++)
    {
        printf("%d ",num[i]);
    }    
}


////////////////////////////////////////////////////_____swap array _____///////////////////////////////////////////////////////




void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


////////////////////////////////////////////////////_____sort array by using bubble sort algorithm _____///////////////////////////////////////////////////////




void sort(int sz, int num[])
{
    int i, j, a, b, temp;
    for(i=0; i<sz; i++)                                     // 3 2 5 1
    {
        for(j=0; j<sz-1; j++)
        {
            if(num[j] > num[j+1])
            {
                swap(&num[j], &num[j+1]);
                //printf("\n%d.....%d\n",num[j],num[j+1]);
            }
        }
    }
}

////////////////////////////////////////////////////_____ main function _____///////////////////////////////////////////////////////




int main()
{
    int n;
    scanf("%d",&n);
    int numbers[n];
    num_input_ara(n, numbers);
    //num_print_ara(n, numbers);
    sort(n, numbers);
    printf("\n\n");
    num_print_ara(n, numbers);
    printf("\n\n");
    return 0;
}