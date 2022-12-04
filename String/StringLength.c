#include<stdio.h>
#include<string.h>
int main()
{
    char S[100];
    int I=0;
    printf("Enter Here : ");
    gets(S);
    printf("You Entered This : "); 
    puts(S); 
    while(S[I]!='\0')
    {
        I=I+1;
    }
    printf("Length Of The Given String Is %d",I);
}