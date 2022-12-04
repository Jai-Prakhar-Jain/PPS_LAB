#include<stdio.h>
int main()
{
    int T;
    printf("Enter The Temprature In Centigrade");
    scanf("%d",&T);
    if (T<0)
    printf("Freezing Weather");
     else if(T<10)
     printf("Very Cold Weather");
      else if(T<20)
      printf("Cold Weather");
       else if(T<30)
       printf("Normal Temprature");
        else if(T<40)
        printf("Hot Weather");
         else if(T>=40)
         printf("Very Hot Weather");
    return 0;
}