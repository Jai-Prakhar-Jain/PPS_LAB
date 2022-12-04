#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C,C1,C2;
    float X,S,R1,R2;
    printf("Enter The Coeffecient Of X^2 : ");
    scanf("%d",&A);
    printf("Enter The Coeffecient Of X : ");
    scanf("%d",&B);
    printf("Enter The Constant Term : ");
    scanf("%d",&C);
    S=pow(B,2);
    X=S-4*A*C;
    if(X>0)
    {
        X=pow(X,.5);
        printf("Real And Distinct Roots\n");
        R1=((-B)/(2*A))+(X/(2*A));
        R2=((-B)/(2*A))-(X/(2*A));
        printf("First Root Of The Given Quadratic Equation Is : %.2f",R1);
        printf("\n");
        printf("Second Root Of The Given Quadratic Equation Is : %.2f",R2);
    }
    if(X==0)
    {
        printf("Roots Are Real And Equal\n");
        R1=(-B)/(2*A);
        R2=(-B)/(2*A);
        printf("First Root Of The Given Quadratic Equation Is : %.2f",R1);
        printf("\n");
        printf("Second Root Of The Given Quadratic Equation Is : %.2f",R2);
    }
    if(X<0)
    {
        X=-1*X;
        X=pow(X,.5);
        printf("Roots Are Imaginary And Distinct");
        R1=-(B/(2*A));
        C1=(X/(2*A));
        C2=-(X/(2*A));
        printf("First Root Of The Given Quadratic Equation Is : %.2f %.2fi",R1,C1);
        printf("\n");
        printf("Second Root Of The Given Quadratic Equation Is : %.2f %.2fi",R1,C2);
    }
    // X=sqrt(X);
    // R1=(-B+X)/(2*A);
    // R2=(-B-X)/(2*A);
    // printf("First Root Of The Given Quadratic Equation Is : %.2f",R1);
    // printf("\n");
    // printf("Second Root Of The Given Quadratic Equation Is : %.2f",R2);
}