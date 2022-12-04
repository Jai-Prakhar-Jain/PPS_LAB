#include <stdio.h>
int main()
{
    int N, I, F = 1;
    float S = 0;
    printf("Enter The Value Of N : ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        F = F * I;
        S = S + (1.0 / F);
    }
    printf("Sum Of The Given Range Is : %f ", S);
    return 0;
}