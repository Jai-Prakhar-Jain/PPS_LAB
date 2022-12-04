#include<stdio.h>
#include<string.h>
int main()
{
    char S[100],T;
    int I=0,J=0;
    printf("Enter Here : ");
    gets(S);
    printf("You Entered This : "); 
    puts(S); 
    while(S[I]!='\0')
    {
        I=I+1;
    }
    for(I=I-1,J;J<I;J++,I--)
    {
        T=S[I];
        S[I]=S[J];
        S[J]=T;
    }
    printf("Reversed String Is : ");
    puts(S);
}