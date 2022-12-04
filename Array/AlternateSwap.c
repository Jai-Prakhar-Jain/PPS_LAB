#include <stdio.h>
int main()
{
    int A[50], N, I = 0, T = 0;
    printf("Enter The Size Of Array : ");
    scanf("%d", &N);
    for (I = 0; I < N; I++)
    {
        printf("Enter The Value Of A[%d] : ", I);
        scanf("%d", &A[I]);
    }
    printf("\nGiven Array : ");
    for (I = 0; I < N; I++)
    {
        printf("%d ", A[I]);
    }
    for (I = 0; I <= N - 2; I = I + 2)
    {

        T = A[I];
        A[I] = A[I + 1];
        A[I + 1] = T;
    }
    printf("\nArray After Alternate Swapping : ");
    for (I = 0; I < N; I++)
    {
        printf("%d ", A[I]);
    }
    return 0;
}