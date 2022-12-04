#include<stdio.h>
int main()
{
    int N,C=0;
    printf("Enter The Number : ");
    scanf("%d",&N);
    while(N!=0)
    {
        if(N%2==0)
        {
            N=N/2;
        }
        else
        {
            N=N-1;
        }
        C++;
    }
    printf("Steps To Reduce A Number To Zero Is ---> %d",C);
    return 0;
}