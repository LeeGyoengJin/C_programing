#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	printf("Input> ");	

	fgets(str, sizeof(str), stdin);

	const int diff = 'a' - 'A';

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - diff;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] +  diff;
	}
	fputs(str, stdout);
	return 0;
}