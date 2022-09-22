#include <stdio.h>

int main(void)
{
	int i, j, k;
	for (i = 0; i < 5; i++)
	{
		for (k = 5; k > i; k--)
		{
			printf(" ");
		}
		for (j = 0; j <= 2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}