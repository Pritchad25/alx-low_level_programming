#include "main.h"
/**
 * flip_bits - this function counts the number of bits to flip to go
 * from one number to another.
 * @n: the first number
 * @m: the second number.
 *
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int currentNum;
	unsigned long int temp = n ^ m;
	int num, counter = 0;

	for (num = 63; num >= 0; num--)
	{
		currentNum = temp >> num;

		if (currentNum & 1)
		{
			counter++;
		}
	}

	return (counter);
}
