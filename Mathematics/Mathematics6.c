#include<stdio.h>
#include<math.h>
int main()
{
    float R;
    printf("Enter The Radius Of Circle : ");
    scanf("%f",&R);
    printf("Area Of Largest Rectangle Which Can Be Inscribed In The Circle Of Give Radius : %.2f",2*pow(R,2));
}