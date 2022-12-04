#include <stdio.h>
int main()
{
    int N, I, F = 1, X, SI = 1,J=1;
    printf("Enter The Value Of N : ");
    scanf("%d", &N);
    printf("Enter The Value Of X : ");
    scanf("%d", &X);
    float S = 0, P = X;
    for (I = 1,J=1; I <= N,J<=N; I=I+1,J=J+2)
    {
        P = P * X*X;
        if(I%2!=0)
        {
            F=F*((2*I)+1)*I;
        }
        else
        {
            F=F*
        }
        S = S + ((P / F) * SI);
        SI = SI * -1;
    }
    printf("Sum Of The Given Series Is : %f ", S);
    return 0;
}