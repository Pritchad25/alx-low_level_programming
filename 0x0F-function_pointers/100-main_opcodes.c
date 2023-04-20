#include <stdlib.h>
#include <stdio.h>
/**
 * main - the function prints its own opcodes
 * @argv: the array of arguments
 * @argc: the number of arguments
 * Return: Always 0, Success
 */
int main(int argc, char *argv[])
{
	int h, units;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	units = atoi(argv[1]);
	if (units < 0)
	{
		printf("Error\n");
		exit(2);
	}
	str = (char *)main;
	for (h = 0; h < units; h++)
	{
		if (h == units - 1)
		{
			printf("%02hhx\n", str[h]);
			break;
		}
		printf("%02hhx ", str[h]);
	}
	return (0);
}
