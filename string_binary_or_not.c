#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, m, n;
    //scanf("%d\n",n);
    char s_word[105];

    int creet;
    fgets(s_word,sizeof(s_word),stdin);
    //i=0;
    puts(s_word);
    m= strlen(s_word)-1;
    //j= sizeof(s_word);
    printf("length is : %d\n",m);
    //printf("Size is : %d\n",j);
    //for(i=0;s_word[i]!='\0';i++)
    for(i=0; i<m+1; i++)
    {
        j=i+1;
        if(s_word[i]=='0' ||  s_word[i]=='1')
        {
            printf("%c is : %d\n",s_word[i],i);

            if(j==m)
            {
                creet = 1;
                printf("yes___%d",creet);
                break;
            }
            else if(j<m)
            {
                //creet=0;
                //break;

                continue;
            }
        }

        else
        {
            creet=0;
            printf("no...");
            break;
        }

//    if(creet ==0)
//    {
//        printf("no...");
//    }
//    else if(creet == 1)
//    {
//        printf("yes......");
//    }

}

    return 0;
}
