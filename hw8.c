#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double SD(int* arr)
{
	double Sigma = 0, mu = 0;
	double sum1 = 0, sum2 = 0;

	for (int i = 0; i < 5; i++)
	{
		sum1 += arr[i];
	}

	mu = sum1/5;

	for (int i = 0; i < 5; i++)
	{
		sum2 += pow(arr[i] - mu, 2);
	}
	sum2 = sum2 / 5;
	return sqrt(sum2);
}


int main(void)
{
	int arr[5];
	printf("Enter 5 real numbers : ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("%f", SD(arr));
	return 0;
}