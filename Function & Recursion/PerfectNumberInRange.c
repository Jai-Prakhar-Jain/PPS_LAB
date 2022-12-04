#include <stdio.h>
int PerfectNumber(int N);

int main()
{
    int S,E,I;
    printf("Enter The Starting Value : ");
    scanf("%d", &S);
    printf("Enter The Ending Value : ");
    scanf("%d",&E);
    for(I=S;I<=E;I++)
    {
        if(PerfectNumber(I)!=0)
        printf("%d ",PerfectNumber(I));
    }
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
      return N;
    }
    else
    return 0;
}