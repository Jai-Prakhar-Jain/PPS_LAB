#include<stdio.h>
int FindNumber(int A[],int N)
{
    A[0]=0;
    if(N==1)
    {
        A[1]= 9;
    }
    if (N==2)
    {
        A[2]= 33;
    }
    if(N>2)
    {
       if(A[N]==0)
       {
            A[N]= FindNumber(A,N-1)-FindNumber(A,N-2)+16+FindNumber(A,N-1);
       }
    }
    return A[N];
}
int main()
{
    int N,A[1000]={0};
    printf("Enter The Number : ");
    scanf("%d",&N);
    printf("%d",FindNumber(A,N));
    return 0;
}