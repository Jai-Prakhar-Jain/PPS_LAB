#include<stdio.h>
int GCD1(int A,int B);
int main()
{
    int A,B,G,L;
    printf("Enter First Number : ");
    scanf("%d",&A);
    printf("Enter Second Number : ");
    scanf("%d",&B);
    G=GCD1(A,B);
    L=(A*B)/G;
    printf("LCM Of The Given Numbers Is ---> %d",L);
    return 0;
}
int GCD1(int A, int B)
{
    if (A == B)
        return A;
    if (A > B)
        return GCD1(A - B, B);
    if (A < B)
        return GCD1(A, B - A);
}