#include <stdio.h>
#include <string.h>
int main()
{
    char S[100];
    int I = 0, A[26] = {0}, K;
    printf("Enter String Here : ");
    gets(S);
    while (S[I] != '\0')
    {
        A[S[I] - 'a'] = A[S[I] - 'a'] + 1;
        I++;
    }
    for (I = 0; I < 26; I++)
    {
        if (A[I] != 0)
        {
            K = I + 97;
            printf("%d ---> %c\n", A[I], K);
        }
    }
    return 0;
}