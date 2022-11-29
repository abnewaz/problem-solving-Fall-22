#include<stdio.h>
#include<string.h>
#include<math.h>

/*______________________________________________________set value for a=0, b-2, ... ... z=26 and add them__________________________________________*/


int s_value(char s_ltr[])
{
    int i, j, cnt=0;
    for(i=0; s_ltr[i] != '\0'; i++)
    {
        if(s_ltr[i] >= 'a' && s_ltr[i]<= 'z')
        s_ltr[i] -= 96;
        cnt += s_ltr[i];
        //for(j=1; j<26)
    }
    //printf("...........%d.........",cnt);
    return cnt;
}

/*______________________________________________________chect sum and sum is power of 2 or not__________________________________________*/

int s_pow_y_n(char s_pow[])
{
    int i, s_val, cnt;
    s_val = s_value(s_pow);
    printf("\n\n%d",s_val);
    for(i=1; i<15; i++)
    {
        cnt = 0;
        if(s_val == (pow(2,i)))
        {
            //cnt = 1;
            return 1;
        }
        else if(s_val < (pow(2,i)))
        {
            //cnt = 0;
            //break;
            return 0;
        }
    }
    //return cnt;
}

/*______________________________________________________main function______________________________________________________*/
int main()
{
    int res=0;
    char s_letters[30];
    scanf("%s",&s_letters);
    //printf("%s",s_letters);
    s_value(s_letters);
    res = s_pow_y_n(s_letters);
    //printf("\n\n%d",res);
    if(res == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}