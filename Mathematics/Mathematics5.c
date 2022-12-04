#include<stdio.h>
int LeastPrimeFactor(int N);
int main()
{
    int N,I=1;
    printf("Enter The Number : ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        if(I==1)
        printf("1 ");
        else if(I%2==0)
        printf("2 ");
        else
        printf("%d ",LeastPrimeFactor(I));
    }
    return 0;
}
int LeastPrimeFactor(int N)
{
    int I;
    for(I=2;I<=N;I++)
    {
        if(N%I==0)
        return I;
    }
}