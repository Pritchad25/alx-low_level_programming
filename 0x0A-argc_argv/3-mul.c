#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a certain string to an integer
 * @s: the string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int a, c, g, len, f, digit;

	a = 0;
	c = 0;
	g = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++c;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (c % 2)
				digit = -digit;
			g = g * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (g);
}

/**
 * main - multiplies two numbers
 * @argc: the number of argumets
 * @argv: array of arguments
 *
 * Return: 0 Success, 1 Error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
