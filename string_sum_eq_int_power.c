#include<stdio.h>
#include<string.h>

int main()
{
    int i, j=0, m, n=1, cost=0;

    char s_word[100];
    fgets(s_word,sizeof(s_word),stdin);
    puts(s_word);
    s_word[strlen(s_word)-1] = '\0';

    for(i=0;s_word[i]!='\0';i++)
    {
        cost += s_word[i]-96;


    }
    printf("cost = %d\n",cost);
    //printf("%d\n",i);
    //printf("pow:  ....%d\n",cost);


        for(j=1;j<='z'*200;j++)
        {

            n=n*2;

            //("N = %d\n",n);
            if(cost==n)
            {
                printf("yes. \n");
                printf("cost = 2^%d",j);
                break;
            }
            else if(cost<n)
            {
                printf("no.\n");
                break;
            }
        }
   // }



    return 0;
}
