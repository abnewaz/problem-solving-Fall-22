#include<stdio.h>

void print_recursion(int num)
{
    //int i=num;
   
    if (num > 0)
    {
        printf("%d ",num);
        num--;
        print_recursion(num);
    }
    
    //return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    print_recursion(n);
    return 0;
}