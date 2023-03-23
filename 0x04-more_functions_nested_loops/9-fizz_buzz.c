#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * followed by a new line. For
 * multiples of 3, print Fizz, for
 * multiples of 5, print Buzz. For numbers
 * which are multiples of both 3 and 5
 * print FizzBuzz
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);

	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");

	return (0);
}
