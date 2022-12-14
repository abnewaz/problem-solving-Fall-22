#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="AnisaNewaz";
    int i, j,  len = strlen(s1);
    for ( i = len - 1; i >=0; i--)          // Array reverse order traverse
    {
        printf("%c ",s1[i]);
    }

    printf("\n\n\n");
    char s2[100];
    scanf("%s",s2);
    int lenn =0;
    j=0;
    while (s2[j]!='\0')
    {
        j++;
        lenn++;
    }
    j=0;
    for(j=lenn-1; j>=0; j--)
    {
        printf("%c ",s2[j]);
    }
    
    return 0;
}