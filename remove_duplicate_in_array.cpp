#include<stdio.h>
int main()
{
    int n, i, j, k = 0, flag = 0;
    scanf("%d",&n);
    int arr[n], unique_array[n];
    
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        flag = 0;
        for ( j = 0; j < n; j++)
        {
            if(unique_array[j] == arr[i])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            unique_array[k] = arr[i];
            k++;
        }
        
        
    }
    for ( i = 0; i < k; i++)
    {
        printf("%d ", unique_array[i]);
    }
    
    

    return 0;
}