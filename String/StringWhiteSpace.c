#include <stdio.h>
#include <string.h>
int main()
{
    char S1[100];
    int I = 0;
    printf("Enter String Here : ");
    gets(S1);
    while (S1[I] != '\0')
    {
        if (S1[I] == ' ')
        {
            I++;
        }
        else
        {
            printf("%c", S1[I]);
            I++;
        }
    }
    return 0;
}