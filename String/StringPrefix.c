#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    int I=0,J=0,K=0;
    printf("Enter A String : ");
    gets(S);
    for(I=0;S[I]!='\0';I++)
    {
        for(J=0;J<=I;J++)
        {
            printf("%c",S[J]);
        }
        printf("\n");
    }
}