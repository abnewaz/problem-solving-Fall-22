#include<stdio.h>
#include<string.h>
void in_decimal_str(int sz, char str_input[])
{
    int i;
    for(i=0; i<sz; i++)
    {
        if(str_input[i] >= 'a' && str_input[i] <= 'z')
        {
            if(str_input[i] % 2 == 0)
            {
                str_input[i] -= 32;
            }
            
        }
    }
}

int main()
{
    int sz;
    char lowercase_str_input[100];
    scanf("%s",&lowercase_str_input);
    sz = strlen(lowercase_str_input);
    in_decimal_str(sz, lowercase_str_input);
    printf("%s",lowercase_str_input);
    return 0;
}