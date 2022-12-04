#include <stdio.h>
int main()
{
    int I, N, S = 0;
    printf("Enter A Number : ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        S = S + (I * (I + 1) * (I + 2));
    }
    printf("Sum Of The Given Seriesb Is : %d", S);
    return 0;
}