#include <stdio.h>
int Add(int N);
int Count(int N);
int main()
{
    int N;
    printf("Enter The Number : ");
    scanf("%d", &N);
    printf("%d", Add(N));
    return 0;
}
int Add(int N)
{
    int S=0,R;
    while (N != 0)
    {
        R = N % 10;
        N = N / 10;
        S = S + R;
    }
    if(Count(S)!=1)
    return Add(S);
    else
    return S;
}
int Count(int N)
{
    int C = 0;
    while (N != 0)
    {
        N = N / 10;
        C++;
    }
    return C;
}