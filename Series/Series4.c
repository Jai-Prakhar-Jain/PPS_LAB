#include <stdio.h>
int main()
{
    int N, I;
    float S = 0;
    printf("Enter The Value Of N : ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        S = S + (1.0 / I);
    }
    printf("Sum Of The Given Series Is : %f ", S);
    return 0;
}