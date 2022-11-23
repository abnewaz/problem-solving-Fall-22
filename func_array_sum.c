#include<stdio.h>
#include<string.h>
#include<math.h>

int sum_ara(int a, int sum[]);
int main()
{
    int n = 5, res;
    int ara[] = {5, 6, 6, 5, 8};

    res = sum_ara(n,ara);
    printf("%d",res);




    return 0;
}
int sum_ara(int a, int sum[])
{
    int add = 0, m, i;
    for(i=0; i<a; i++)
    {
        add += sum[i];

    }
    return add;
}

