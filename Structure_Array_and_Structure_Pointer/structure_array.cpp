#include <stdio.h>
struct Student
{
    double weight;
    int roll;
};

int main()
{
    struct Student s[10];
    int i;
    for(i=0; i<10; i++)
    {
        s[i].roll = 11+i;
        s[i].weight = 67.98+i*3;
    }
    for(i=0; i<10; i++)
    {
        printf("%d %lf\n",s[i].roll, s[i].weight);
    }
    return 0;
}
