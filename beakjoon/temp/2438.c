
#include <stdio.h>

int main()
{
	char N;
	scanf("%hhd", &N);
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
