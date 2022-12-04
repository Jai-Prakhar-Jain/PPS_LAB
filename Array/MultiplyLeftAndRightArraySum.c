#include<stdio.h>
int main()
{
    int A[50],N,I=0,K,S1=0,S2=0;
    printf("Enter The Size Of Array : ");
    scanf("%d",&N);
    for(I=0;I<N;I++)
    {
        printf("Enter The Value Of A[%d] : ",I);
        scanf("%d",&A[I]);
    }
    printf("\nGiven Array : ");
    for(I=0;I<N;I++)
    {
        printf("%d ",A[I]);
    }
    K=N/2;
    for(I=0;I<K;I++)
    {
        S1=S1+A[I];
    }
    for(I=K;I<N;I++)
    {
        S2=S2+A[I];
    }
    printf("\nSum Of The Left Half Of The Array Is : %d",S1);
    printf("\nSum Of The Right Half Of The Array Is : %d",S2);
    printf("\nTheir Multiplication Is : %d",S1*S2);
    return 0;
}