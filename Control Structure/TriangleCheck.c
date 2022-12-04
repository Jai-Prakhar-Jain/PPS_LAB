#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter First Side ");
    scanf("%d",&A);
    printf("Enter Second Side ");
    scanf("%d",&B);
    printf("Enter Third Side ");
    scanf("%d",&C);
    if(A+B>C && B+C>A && A+C>B)
    {
        if (A==B && B==C)
        printf("Equilateral Triangle");
        else if ((A==B && C!=A) ||(B==C && C!=A) || (A==C && B!=A))
        printf("Isosceles Triangle");
        else
        printf("Scalene Triangle");     
    }
    else
    printf("No Triangle Is Formed");
    return 0;
}