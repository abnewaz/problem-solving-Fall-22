#include<stdio.h>
struct Student{
        double weight;
        int roll;
        int age;
    };
int main()
{
    struct Student s = {.weight=534.45,.roll =12,.age=23};
    struct  Student* sp;
    sp = &s;
    printf("%d %lf %d\n", sp->roll, sp->weight, sp->age);
    return 0;
}
