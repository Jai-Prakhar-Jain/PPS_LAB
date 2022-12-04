#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter The First Number:");
    scanf("%d",&A);
    printf("Enter The Second Number:");
    scanf("%d",&B);
    printf("Enter The Third Number:");
    scanf("%d",&C);
    if(A>B && A>C)
    printf("First Number Is Largest");
    else if (B>A && B>C)
    printf("Second Number Is Largest");
    else
    printf("Third Number Is Largest");
    return 0;   
}