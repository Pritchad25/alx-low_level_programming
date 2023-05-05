#include "main.h"
/**
 * get_bit - this function returns the value of a bit at a given index.
 * @index: the index of the bit
 * @n: the decimal number to search
 *
 * Return: the value of the bit at the index called index (Success)
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valueOfBit;

	if (index > 63)
	{
		return (-1);
	}

	valueOfBit = (n >> index) & 1;

	return (valueOfBit);
}
