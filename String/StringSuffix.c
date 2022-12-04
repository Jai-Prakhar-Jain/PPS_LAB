#include<stdio.h>
#include<string.h>
int main()
{
    char S[100],T;
    int I=0,J=0,K=0;
    printf("Enter A String : ");
    gets(S);
    while(S[K]!='\0')
    {
        K=K+1;
    }
    K=K-1;
    for(I=K;I>=0;I--)
    {
        for(J=K;J>=I;J--)
        {
            printf("%c",S[J]);
        }
        printf("\n");
    }
}