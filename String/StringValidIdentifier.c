#include <stdio.h>
#include <string.h>
int main()
{
   char S[100];
   int I = 1, F = 1;
   printf("Enter String : ");
   gets(S);
   if (S[0] == '_' || S[0] >= 'a' && S[0] <= 'z' || S[0] >= 'A' && S[0] <= 'Z')
   {
      while (S[I] != '\0')
      {
         if (S[I] == '_' || S[I] >= 'a' && S[I] <= 'z' || S[I] >= 'A' && S[I] <= 'Z' || S[I] >= '0' && S[I] <= '9' || S[I] == '$')
         {
            F = 1;
            I++;
         }
         else
         {
            F = 0;
            break;
         }
      }
      if (F == 1)
      {
         printf("Valid C Identifier");
      }
      else
      {
         printf("Not A Valid C Identifier");
      }
   }
   else
   {
      printf("Not A Valid C Identifier");
   }
   return 0;
}