#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double K, M;
	printf("Please enter kilometers :");
	scanf("%lf", &K);
	M = K / 1.609;
	printf("%0.1lf km is equal to %0.1lf miles.", K, M);
	return 0;
}