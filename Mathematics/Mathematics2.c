#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,R,K,X,I=0;
    printf("Enter Base : ");
    scanf("%d",&A);
    printf("Enter Exponent : ");
    scanf("%d",&B);
    printf("Enter The Digt You Want To Find : ");
    scanf("%d",&X);
    K=pow(A,B);
    while(I<X )
    {
        R=K%10;
        K=K/10;
        I++;
    }
    printf("Number At the Given Digit Is ---> %d",R);
}