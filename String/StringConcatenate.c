#include<stdio.h>
#include<string.h>
int main()
{
    char S1[10],S2[10];
    int I=0,J=0;
    printf("Enter String 1 : ");
    gets(S1);
    printf("Enter String 2 : ");
    gets(S2);
    while(S1[I]!='\0')
    {
        I++;
    }
    while(S2[J]!='\0')
    {
        S1[I]=S2[J];
        I++;
        J++;
    }
    S1[I]='\0';
    printf("String After Concatenation ---> %s",S1);
}