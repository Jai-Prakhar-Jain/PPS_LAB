#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    int I=0,F=0,J=0;
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
        if(S[I]==S[J])
        F=0;
        else
        F=1;
    }
    if(F==0)
    printf("Given String Is A Palindrome ");
    else
    printf("Given String Is Not A Palindrome ");
}