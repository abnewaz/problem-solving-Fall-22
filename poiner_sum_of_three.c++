#include<stdio.h>
void sum(int* x, int* y, int* z)
{
    int res = *x +*y+ *z;
    printf("%d",res);
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    /* int* p = &a;
    int* q = &b;
    int* r = &c; */
    
    sum(&a,&b,&c);
    return 0;

    
}