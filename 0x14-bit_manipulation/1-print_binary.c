#include "main.h"
/**
 * print_binary - this function prints the binary representation of
 * a decimal number.
 * @n: the decimal nummber to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int currentNum;
	int counter = 0, num;

	for (num = 63; num >= 0; num--)
	{
		currentNum = n >> num;
		if (currentNum & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
	}
	if (!counter)
	{
		_putchar('0');
	}
}
