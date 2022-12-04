#include <stdio.h>
int main()
{
    int L, R, I, K, F = 1, X;
    printf("Enter First Number : ");
    scanf("%d", &L);
    printf("Enter Last Number : ");
    scanf("%d", &R);
    for (I = L; I <= R; I++)
    {
        K = I;
        F = 1;
        while (K != 0)
        {
            X = K % 10;
            if (X == 0)
            {
                F=0;
                break;
            }
            else
            {
                if (I % X == 0)
                {
                    F = 1;
                }
                if (I % X != 0)
                {
                    F = 0;
                    break;
                }
            }
            K = K / 10;
        }
        if (F == 1)
        {
            printf("%d ", I);
        }
        else
        {
            continue;
        }
    }
}