#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int num)
{
	printf("�� : %d, ������ : %d\n", num / 2, num % 2);
	if (num / 2 == 1)
		printf("%d%d", 1, num % 2);
	else
	{
		binary(num / 2);
		printf("%d", num % 2);
	}
}

int main(void)
{
	int num = 0;
	printf("���� ���� �Է� : ");
	scanf("%d", &num);
	binary(num);
	return 0;
}