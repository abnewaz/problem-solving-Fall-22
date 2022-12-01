#include <stdio.h>
#include<math.h>
double area_of_a_circle(double* red)
{
    double pi= 3.14160005, area,r;
    r= (*red)*(*red);
    area = pi*r;
    return area;
}
int main()
{
    int r;
    double area;
    scanf("%d",&r);
    double radious = (double)r;
    area = area_of_a_circle(&radious);
    printf("%lf",area);
    return 0;
}