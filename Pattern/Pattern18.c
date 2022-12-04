#include<stdio.h>
#include<string.h>
int main()
{
    char A[100];
    int N,I=0,J=0,K;
    printf("Enter A String : ");
    gets(A);
    N=strlen(A);
    for(I=0;I<N;I++)
    {
        for(J=0;J<I;J++)
        {
            printf(".");
        }
        for(K=I;K<N;K++)
        {
            printf("%c",A[K]);
        }
        printf("\n");
    }
    return 0;
}