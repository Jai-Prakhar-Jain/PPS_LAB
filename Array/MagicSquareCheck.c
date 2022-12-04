#include<stdio.h>
int main()
{
    int A[100][100],I,J,S[100]={0},K=0,R,F=1;
    printf("Enter Number Of Rows : ");
    scanf("%d",&R);
    for(I=0;I<R;I++)
    {
        for(J=0;J<R;J++)
        {
            printf("Enter A[%d][%d] : ",I,J);
            scanf("%d",&A[I][J]);
        }
    }
    for(I=0;I<R;I++)
    {
        for(J=0;J<R;J++)
        {
            S[K]=S[K]+A[I][J];
        }
        K++;
    }
    for(J=0;J<R;J++)
    {
        for(I=0;I<R;I++)
        {
            S[K]=S[K]+A[J][I];
        }
        K++;
    }
    for(I=0,J=0;I<R,J<R;I++,J++)
    {
        
        S[K]=S[K]+A[I][J];
    }
    for(I=0;I<=K;I++)
    {
        if(S[0]==S[I])
        {
            F=1;
        }
        else
        {
            F=0;
            break;
        }
    }
    if(F==1)
    {
        printf("Valid Magic Square");
    }
    else
    {
        printf("Invalid Magic Square");
    }
}