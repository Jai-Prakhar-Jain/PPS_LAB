#include<stdio.h>
int Prime(int N);
int main()
{
    int N,I;
    printf("Enter The Number : ");
    scanf("%d",&N);
    printf("Prime Factors Of The Given Number Are : ");
    for(I=2;I<=N;I++)
    {
        if(N%I==0)
        {
            if(Prime(I))
            {
                printf("%d ",I);
            }
        }
    }
    return 0;
}
int Prime(int N)
{
    int I=1,C=0;
    for(I=1;I<=N;I++)
    {
        if(N%I==0)
        {
            C=C+1;
        }
    }
    if(C==2)
    return 1;
    else
    return 0;
}