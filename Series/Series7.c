#include <stdio.h>
int main()
{
    int N, I, F = 1, X;
    float S = 0, P = 1.00;
    printf("Enter The Value Of N : ");
    scanf("%d", &N);
    printf("Enter The Value Of X : ");
    scanf("%d", &X);
    for (I = 1; I <= N; I++)
    {
        P = P * X;
        F = F * I;
        S = S + (P / F);
    }
    printf("Sum Of The Given Series Is : %f ", S);
    return 0;
}