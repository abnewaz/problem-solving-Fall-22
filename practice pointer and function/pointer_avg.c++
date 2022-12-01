#include<stdio.h>

int main()
{
    int x, y;
    float avg, sum;
    int* a;
    int* b;
    float* average;
    a = &x;
    b = &y;
    average = &avg;
    scanf("%d %d",&*a,&*b);
    printf("\n%d %d \n",*a,*b);
    sum = *a+*b;
    *average = (sum/2);
    printf("\n%.3f\n",*average);
    return 0;
}