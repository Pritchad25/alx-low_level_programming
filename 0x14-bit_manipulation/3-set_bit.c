#include "main.h"
/**
 * set_bit - this function sets the value of a bit at a given index to 1
 * @index: the index of the bit to set to 1 .
 * @n: the number to change
 *
 * Return: 1 (Success), otherwise -1 if an eror occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);

	return (1);
}
