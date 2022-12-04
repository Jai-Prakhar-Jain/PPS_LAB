#include<stdio.h>
int main()
{
    char A;
    printf("Enter An Alphabet ");
    scanf("%c",&A);
    if(A=='a'|| A=='e'|| A=='i'|| A=='o'|| A=='u'|| A=='A'|| A=='E'|| A=='I'|| A=='O'|| A=='U')
    printf("Entered Alphabet Is A Vowel");
    else
    printf("Entered Alphabet Is A Consonant");
    return 0;
}