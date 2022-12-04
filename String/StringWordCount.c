#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    int L=0,C=0;
    printf("Enter The String Here : ");
    gets(S);
    while(S[L]!='\0')
    {
        if(S[L]==' ' && S[L+1]!=' ' || S[L]=='\n' || S[L]=='\t')
        {
            C=C+1;
        }
        L=L+1;
    }
    printf("Total Number Of Words In The Given String Is %d",C+1);
    return 0;
}