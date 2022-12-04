#include <stdio.h>
int main()
{
    int A[50], I = 0, N, S2 = 2, S1 = 1;
    printf("Enter The Number : ");
    scanf("%d", &N);
    if (N % 2 == 0)
    {
        for (I = 1; I <= N / 2; I++)
        {
            A[I] = S1;
            S1 = S1 + 2;
        }
        for (I = N; I > N / 2; I--)
        {
            A[I] = S2;
            S2 = S2 + 2;
        }
    }
    else
    {
        for (I = 1; I <= (N / 2) + 1; I++)
        {
            A[I] = S1;
            S1 = S1 + 2;
        }
        for (I = N; I > (N / 2) + 1; I--)
        {
            A[I] = S2;
            S2 = S2 + 2;
        }
    }
    printf("Array Generated From The Given Number Is : ");
    for (I = 1; I <= N; I++)
    {
        printf("%d ", A[I]);
    }
    return 0;
}