#include<stdio.h>
int StrongNumber(int N);
int Factorial(int N);
int main()
{
    int N;
    printf("Enter The Number : ");
    scanf("%d",&N);
    StrongNumber(N);
}

int StrongNumber(int N)
{
    int I,K=N,Y=0,R=1,S=0;
    while(K!=0)
    {
       Y=K%10;
       K=K/10;
       S=S+Factorial(Y);
    }
    if(N==S)
        printf("Given Number Is A Strong Number ");
    else
        printf("Given Number Is Not A Strong Number ");
    return 0;  
}
int Factorial(int N)
{
    int I=1,F=1;
    for(I=1;I<=N;I++)
    {
        F=F*I;
    }
    return F;
}