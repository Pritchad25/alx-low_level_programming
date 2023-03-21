#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);

	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");

	return (0);
}
