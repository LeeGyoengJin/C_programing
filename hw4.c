#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int count = 0;
	printf("양의 정수 입력 : ");
	scanf("%d", &num);
	
	for (int i = 2; i < num; i++)
	{
		if (num % i != 0)
			continue;
		else
		{
			count += 1;
			break;
		}
	}
	switch (count)
	{
	case 0:
		printf("It is a prime number.");
		break;
	default:
		printf("It is not a prime number.");
		break;
	}
	return 0;
}