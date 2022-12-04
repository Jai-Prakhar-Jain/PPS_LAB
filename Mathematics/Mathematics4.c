#include <stdio.h>
int Count(int N);
int BalancedSum(int N, int A);
int main()
{
    int N, A;
    printf("Enter The Number : ");
    scanf("%d", &N);
    A = Count(N);
    BalancedSum(N, A);
    return 0;
}
int Count(int N)
{
    int C = 0;
    while (N != 0)
    {
        N = N / 10;
        C++;
    }
    return C;
}
int BalancedSum(int N, int A)
{
    int I = 0, S1 = 0, K1, K2, S2 = 0;

    for (I = 0; I < A / 2; I++)
    {
        K1 = N % 10;
        N = N / 10;
        S1 = S1 + K1;
    }
    N = N / 10;
    for (I = A / 2; I < A - 1; I++)
    {
        K2 = N % 10;
        N = N / 10;
        S2 = S2 + K2;
    }
    if (S1 == S2)
    {
        printf("Given Number Is A Balanced Number");
    }
    if (S1 != S2)
    {
        printf("Given Number Is Not A Balanced Number");
    }
}