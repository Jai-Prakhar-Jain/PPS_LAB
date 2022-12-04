#include <stdio.h>

int main()
{
	int N,I,J;
    printf("Enter The Number : ");
	scanf("%d",&N);
    printf("\n");
	for(I=0;I<N;I++)
	{
		for(J=0;J<N;J++)
		{
			if(I==0 || I==N-1 || I+J==N-1)
			printf("*");
			else
			printf(" ");
		}
        printf("\n");		
	}
	return 0;              	                  	
}