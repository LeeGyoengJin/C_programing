#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct city
{
	char cityName[20];
	char Country[20];
	char Population[20];
}City;

void deleteEnter(City* city)
{
	for (int i = 0; i < 3; i++)
	{
		if (city[i].cityName[strlen(city[i].cityName) - 1] == '\n')
			city[i].cityName[strlen(city[i].cityName) - 1] = '\0';
		if (city[i].Country[strlen(city[i].Country) - 1] == '\n')
			city[i].Country[strlen(city[i].Country) - 1] = '\0';
		if (city[i].Population[strlen(city[i].Population) - 1] == '\n')
			city[i].Population[strlen(city[i].Population) - 1] = '\0';
	}
}

int main(void)
{
	City city[3];
	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(city[i].cityName, sizeof(city[i].cityName), stdin);
		printf("Country> ");
		fgets(city[i].Country, sizeof(city[i].Country), stdin);
		printf("Population> ");
		fgets(city[i].Population, sizeof(city[i].Population), stdin);
	}
	deleteEnter(city);

	printf("Printing the three cities:\n");
	for (int i = 0; i < 3; i++)
		printf("%d. %s in %s with a population of %s people\n", i + 1, city[i].cityName, city[i].Country, city[i].Population);
	return 0;
}