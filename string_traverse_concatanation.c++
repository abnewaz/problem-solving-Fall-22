#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50] = "Anisa";
    char s2[] = "Newaz";
    int i = 0, len = 0, j = 0;
    while (s1[i] != '\0')
    {
        i++;
        len++;
    }
    printf("%d\n", len);
    while (s2[j] != '\0')
    {
        s1[len + j] = s2[j];
        j++;
    }
    printf("String = %s", s1);
    return 0;
}