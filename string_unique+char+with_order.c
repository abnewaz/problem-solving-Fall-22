#include<stdio.h>
#include<string.h>

int main()
{
    int m, n, i, j, k;

    char s[102];
    fgets(s, sizeof(s), stdin);
    puts(s);
    //m = (s[i])!='\0';
    //printf("\n%d\n",m);
    n = s[0];
    //printf("%c",n);
    for(i=0; (s[i])!='\0'; i++)
    {
        //printf("%c",s[i]);
        if(s[i] != s[i-1])
        {
            //n =n ;
            printf("%c",s[i]);
        }
        else if(s[i-1] == s[i])
        {
            continue;
        }
    }



    return 0;
}
