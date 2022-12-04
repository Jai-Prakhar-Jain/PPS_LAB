#include <stdio.h>
#include <string.h>
int main()
{
    char S1[100], S2[100];
    int L1 = 0, L2 = 0, I = 0, F = 0;
    printf("Enter String 1 Here : ");
    gets(S1);
    printf("You Entered This : ");
    puts(S1);
    printf("Enter String 2 Here : ");
    gets(S2);
    printf("You Entered This : ");
    puts(S2);
    while (S1[L1] != '\0')
    {
        L1 = L1 + 1;
    }
    while (S2[L2] != '\0')
    {
        L2 = L2 + 1;
    }
    if (L1 == L2)
    {
        while (S1[I] != '\0')
        {
            if (S1[I] == S2[I])
            {
                F = 0;
            }
            else
            {
                F = 1;
                break;
            }
            I++;
        }
        if (F == 0)
        {
            printf("Given Strings Are Equal");
        }
        else
        {
            printf("Given Strings Are Not Equal");
        }
    }
    else
    {
        printf("Given Strings Cannot Be Compared");
    }
    return 0;
}