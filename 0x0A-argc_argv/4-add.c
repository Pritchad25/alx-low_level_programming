#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks the str for any digit
 * @str: array str
 *
 * Return: Always 0 Success
 */
int check_num(char *str)
{
	/*Declaring the variables to be used*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*checks str if there are any digits*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - prints the name of the program
 * @argc: counts argument.
 * @argv: arguments
 *
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*iterates through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*the function atoi converts string to int*/
			sum += str_to_int;
		}
		/*In the case where one of the numbers contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
