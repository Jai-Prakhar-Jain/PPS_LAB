#include<stdio.h>
int Median(int A[],int N);
int Mean(int A[],int N);
int main()
{
    int A[50]={0},I,J,N;
    printf("Enter The Size Of Array : ");
    scanf("%d",&N);
    for(I=0;I<N;I++)
    {
        printf("Enter The Value Of A[%d] ---> ",I);
        scanf("%d",&A[I]);
    }
    Mean(A,N);
    Median(A,N);
    
}
int Mean(int A[],int N)
{
    int M=0,I;
    for(I=0;I<N;I++)
    {
        M=M+A[I];
    }
    M=M/N;
    printf("Mean Of The Given Numbers Is ---> %d",M);
}

int Median(int A[],int N)
{
   int I,J,T;
   for(I=1;I<=N-1;I++)
    {
        for(J=1;J<=N-I;J++)
        {
            if(A[J]>A[J+1])
            {
                T=A[J];
                A[J]=A[J+1];
                A[J+1]=T;
            }
        }
    }
    for(I=0;I<N;I++)
    {
        
    }
    printf("\nMedian Of The Given Numbers Is ---> %d",A[(N/2)]); 
}