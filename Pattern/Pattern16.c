#include <stdio.h>
int main()
{
    int N;
    int I, J, K = 1;
    printf("Enter The Number : ");
    scanf("%d",&N);
    for (I = 1; I <= N; I++)
    {
        K = I - 1;
        for (J = 1; J <= ((I * 2) - 1); J++)
        {
            if (J <= I)
            {
                printf("%d", J);
            }
            else
            {
                printf("%d", K);
                K = K - 1;
            }
        }
        printf(" ");
    }
    return 0;
}