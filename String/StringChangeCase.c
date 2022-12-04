#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    int L=0;
    printf("Enter The String Here : ");
    gets(S);
    for(L=0;S[L]!='\0';L++)
    {
        if(S[L]>='A' && S[L]<='Z')
        {
            S[L]=S[L]+32;
        }
        else if(S[L]>='a' && S[L]<= 'z')
        {
            S[L]=S[L]-32;
        }
    }
    printf("String After Changing All The Lowercase To Uppercase And Uppercase To Lowercase Is : ");
    puts(S);
}