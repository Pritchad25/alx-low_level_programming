#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 * @n: Number whose last digit is to be printed
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');

	return (0);
}
