#include <stdio.h>
int PerfectNumber(int N);

int main()
{
    int N;
    printf("Enter The Number : ");
    scanf("%d", &N);
    PerfectNumber(N);
    return 0;
}

int PerfectNumber(int N)
{
    int I, S = 0;
    for (I = 1; I < N; I++)
    {
        if (N % I == 0)
        {
            S = S + I;
        }
    }
    if (S == N)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not A Perfect Number");
    }
    return 0;
}